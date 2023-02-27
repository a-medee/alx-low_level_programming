#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string;
 * @s: a parameter of type char *
 *
 * description: a function that reverse a string took as a parameter
 * Return: type void
 */

void rev_string(char *s)
{
	unsigned long size = strlen(s);
	int p = (size - 1), i = 0, tp = 0;

	while (i <= (size / 2))
	{
		tp = *(s + i);
		*(s + i) = *(s + p);
		*(s + p) = tp;
		i++;
		p--;
	}

}
