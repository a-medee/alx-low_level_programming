#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 *
 */

void times_table() {

	int i, j , res;

	for (i = 0; i <= 9; i++)
	{
		for (j=0; j <= 10; j++)
		{
			res = j * i;
			if (j != 10)
			{
				print_all(res);
				_putchar(',');
				_putchar(' ');
			}
			print_all(res);
		}

		_putchar('\n');
	}
}


/**
 * print_all - print all number took in as parameter
 * @n : type int parameter
 *
 * Description: a function that display the number passed in parameter
 */

void print_all(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_all(n / 10);

	_putchar(n % 10 + '0');
}
