#include "main.h"

/**
 * print_number - print all number took in as parameter
 * @n : type int parameter
 *
 * Description: a function that displays the numbers passed in
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_all(n / 10);
	}

	_putchar(n % 10 + '0');
}
