#include "main.h"

/**
 * print_number - print all number took in as parameter
 * @n : type int parameter
 *
 */

void print_number(int n)
{
	int p = 10;
	char c = '0';

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / p)
	{
		print_number(n / p);
	}

	_putchar(n % p + c);
}
