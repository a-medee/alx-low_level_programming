#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: a pointer-to-char.
 * @src: a pointer-to-char
 * @n : type int variable,  number of caracters to be copied
 *
 * description: function that concatenates two strings using a specified number
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
