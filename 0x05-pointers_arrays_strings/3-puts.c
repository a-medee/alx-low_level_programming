#include "main.h"
#include <string.h>

/**
 * _puts - prints a string
 * @str: a parameter of type char *
 *
 * description: a function that prints a string, followed by a new line,
 * to stdout.
 * Return: type void
 */

void _puts(char *str)
{
	char *ch = str;

	while (*ch != '\0')
	{
		_putchar(*ch++);
	}

	_putchar('\n');

}
