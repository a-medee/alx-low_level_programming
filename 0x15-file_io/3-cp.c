#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - program entry point
 * @argc: the argument count passed to our program
 * @argv: an array of pointer to string
 *
 * Return: Always 0.
 */

void close_file(int, int);

int main(int argc, char **argv)
{

	int file, file_1, rd;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "%s, %s\n", "Error: Can't read from file",
			argv[1]);
		exit(98);
	}

	file_1 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (file_1 == -1)
	{
		dprintf(STDERR_FILENO, "%s, %s\n", "Error: Can't write to",
			argv[2]);
		exit(99);
	}

	while((rd = read(file, buf, 1023)) > 0)
	{
		write(file_1, buf, rd);
	}


	close_file(file, file_1);

	return (0);
}

void close_file(int file, int file_1)
{
	if (close(file) == -1)
	{
		dprintf(file, "%s, %d", "Can't close", file);
		exit(100);
	}

	if (close(file_1) == -1)
	{
		dprintf(file, "%s, %d", "Can't close", file_1);
		exit(100);
	}
}
