#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * description - filename is the name of the file and text_content is the
 * NULL terminated string to add at the end of the file
 * If text_content is NULL, append_to_file does not add anything to the file.
 * Return: 1 on success, or if the file exists, and -1 on failure, if filename
 * is NULL, if the file does not exist, or if you do not have the required
 * permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, rd;
	unsigned long int size = strlen(text_content);

	if (filename)
	{
		file = open(filename, O_WRONLY | O_APPEND);

		if (file == -1)
			return (-1);

		if (text_content)
		{
			rd = write(file, text_content, size);

			if (rd == -1 || (unsigned long int) rd != size)
				return (-1);
		}
		close(file);
		return (1);
	}
	return (-1);

}
