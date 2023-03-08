#include "main.h"

/**
 *_puts_recursion - prints a string
 *@s: a pointer to type char
 *
 *description -  a function that prints a string, followed by a new line.
 *Return: type void
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}

}
