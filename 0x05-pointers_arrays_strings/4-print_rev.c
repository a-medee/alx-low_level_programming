#include "main.h"

#include <string.h>

/**
 * print_rev - prints a string
 * @str: a parameter of type char *
 *
 * description: a function that prints a string,in reverse order
 * Return: type void
 */

void print_rev(char *str)
{
	unsigned long size = strlen(str);
	char *p = str + (size - 1), *t = str;

	while (p >= t)
	{
		_putchar(*p--);
	}

	_putchar('\n');
}
