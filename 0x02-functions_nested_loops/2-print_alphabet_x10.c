#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{

	int i = 0;

	while (i < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a++);
		}

		_putchar('\n');

		++i;
	}

}
