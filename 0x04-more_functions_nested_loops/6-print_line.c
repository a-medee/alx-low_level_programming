#include "main.h"

/**
 * print_line - draws a straight line
 * @n: formal parmater of type int
 *
 * Return: type void
 */

void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
