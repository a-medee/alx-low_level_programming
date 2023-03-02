#include <string.h>
#include "main.h"

/**
 * rot13 - compares two strings.
 * @s1: a pointer-to-char.
 *
 * description: a function that copies two strings.
 * Return: a pointer-to-char
 */

char *rot13(char *s1)
{
	unsigned long int a = strlen(s1), i;
	int j = 0;

	char *p = "ABCDEFGHIJKLMabcdefghijklm";
	char *l = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (*(s1 + i) == (*(p + j)))
				(*(s1 + i)) = *(l + j);
		}
	}

	return (s1);
}
