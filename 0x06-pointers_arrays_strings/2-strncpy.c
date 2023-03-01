#include <string.h>
#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: a pointer-to-char.
 * @src: a pointer-to-char
 * @n: a type int parameter, number of caracters to be copied
 *
 * description: a function that copies two strings.
 * Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
