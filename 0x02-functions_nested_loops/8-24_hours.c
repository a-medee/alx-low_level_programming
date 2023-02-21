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
				_putchar('0' + 0);
				_putchar('0' + min);
			}

			_putchar('\n');
		}
	}
}
