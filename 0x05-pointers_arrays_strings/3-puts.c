#include "main.h"
#include <string.h>

/**
 * _puts - hat prints a string
 * @n: a parameter of type int *
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
