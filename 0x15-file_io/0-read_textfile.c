#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file whose content is to be printed
 * @letters: is the number of letters to be read and print
 *
 * description - reads a filename and prints letters name from it
 * to the POSIX standard output
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd = 0, wr = 0;
	char *buf = malloc(sizeof(char) * letters);

	if (filename && buf)
	{
		file = open(filename, O_RDONLY);
		if (file == -1)
			return (0);

		rd = read(file, buf, letters);
		if (rd == -1 && rd != (ssize_t) letters)
			return (0);

		wr = write(STDOUT_FILENO, buf, rd);

		if (wr == -1 || wr != rd)
			return (0);

		close(file);
		return (wr);
	}

	return (0);
}
