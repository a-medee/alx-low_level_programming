#include "main.h"

/**
 * jack_bauer - every minute of the day of Jack Bauer
 *
 * Description: a function that checks for lowercase character.
 */

void jack_bauer(void)
{
	int hours = 0, min = 0;

	for (hours = 0; hours <= 23; hours++)
	{
		for (min = 0; min <= 59; min++)
		{
			if (hours <= 9)
			{
				_putchar('0' + 0);
				_putchar('0' + hours);
				_putchar('0' + 0);
				_putchar('0' + min);

			}
			else
			{
				print_all(0);
				print_all(min);
			}

			_putchar('\n');
		}
	}
}


/**
 * print_all - every minute of the day of Jack Bauer
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
