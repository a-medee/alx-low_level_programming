#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * main - program entry point
 * @argc: the argument count passed to our program
 * @argv: an array of pointer to string
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{

	int file, file_1;
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

	file_1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_1 == -1)
	{
		dprintf(STDERR_FILENO, "%s, %s\n", "Error: Can't write to",
			argv[2]);
		exit(99);
	}

	write_to_dest(file, file_1, buf, argv[2], argv[1]);
	close_file(file, file_1);

	return (0);
}

/**
 * close_file - close files descriptor
 * @file: a file descriptor
 * @file_1: a file descriptor
 *
 */

void close_file(int file, int file_1)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "%s, %d", "Can't close", file);
		exit(100);
	}

	if (close(file_1) == -1)
	{
		dprintf(STDERR_FILENO, "%s, %d", "Can't close", file_1);
		exit(100);
	}
}

/**
 * write_to_dest - write a file to destination
 * @file: a file descriptor
 * @file_1: a file descriptor
 * @buf: a buffer to be used for reading and writting
 * @ar: a from which to read
 * @from: a file from which to write
 *
 * Return: a type void
 */

void write_to_dest(int file, int file_1, char *buf, char *ar, char *from)
{
	int rd;

	while ((rd = read(file, buf, 1024)) > 0)
	{
		if (write(file_1, buf, rd) != rd)
		{
			exit(99);
			dprintf(STDERR_FILENO, "%s, %s\n", "Error: Can't write to",
				ar);
		}
	}

	if (rd == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "%s, %s\n", "Error: Can't read from file",
			from);
	}
}
