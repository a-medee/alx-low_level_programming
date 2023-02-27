#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: pointer to type char
 *
 * Return: void
 */

void puts2(char *str)
{
	size_t  i = 0;
	while (i < strlen(str))
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}

	_putchar('\n');
}
