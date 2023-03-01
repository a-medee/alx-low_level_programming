#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenate two strings.
 * @dest: a pointer-to-char.
 * @src: a pointer-to-char
 *
 * description: a function that concatenate two strings.
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
