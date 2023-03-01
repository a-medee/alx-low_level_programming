#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - to lowercase
 * @a: a pointer-to-char.
 *
 * description: a function change a string to
 * its lowercase equivalent
 * Return: an pointer-to-char
 */

char *string_toupper(char *a)
{
	unsigned long int b = strlen(a), i;
	char *s = a;

	for (i = 0; i < b; i++)
	{
		*(a + i) = toupper(*(a + i));
	}

	return (s);
}
