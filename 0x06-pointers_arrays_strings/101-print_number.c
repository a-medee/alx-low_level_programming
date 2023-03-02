#include <string.h>
#include "main.h"

/**
 * print_number - print integer
 * @n: a type int paramater
 *
 * description: a function that prints an integer
 * Return: type void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
