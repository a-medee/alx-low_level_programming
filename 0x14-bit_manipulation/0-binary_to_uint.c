#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0,  if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned long int number = 0;

	if (b)
	{
		while (*b)
		{
			if (*b != '1' && *b != '0')
				return (0);
			number <<= 1;
			if (*b++ == '1')
				number |= 1;

		}
		return (number);
	}

	return (0);
}
