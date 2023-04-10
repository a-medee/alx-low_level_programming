#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * create_file - create a file
 * @filename: the filename to be created
 * @text_content: the content to be witten inside the filename
 *
 * description - creates filename and put textfile into it.
 * the created file must have those permissions: rw-------.
 * If the file already exists, create_file does not change the permissions.
 * if the file already exists, it truncates it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file, rd;
	unsigned long int size = strlen(text_content);

	if (filename)
	{
		file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

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
