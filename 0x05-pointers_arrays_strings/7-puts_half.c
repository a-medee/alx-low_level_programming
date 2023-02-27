#include "main.h"
#include <string.h>

/**
 * puts_half - half of a string
 * @str: pointer to type char
 *
 * description - the function should print the second half of the string
 * Return: void
 */

void puts_half(char *str)
{
	unsigned long size = strlen(str);
	unsigned int i, length_to_go;

	if ((size % 2) == 0)
	{
		length_to_go = size / 2;
		i = length_to_go;

		while (i < size)
		{
			_putchar(*(str + i));
			i++;
		}

		_putchar('\n');
	}

	else
	{
		length_to_go = (size - 1) / 2;
		i = length_to_go - 1;

		while (i < size)
		{
			_putchar(*(str + i));
			i++;
		}

		_putchar('\n');
	}
}
