#include "main.h"


/**
 * more_numbers - prints 10 times
 *
 * description: a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;

	while (i <= 14)
	{
		print_all(i);
		i++;
	}

	_putchar('\n');
};

/**
 * print_all - print all number took in as parameter
 * @n : type int parameter
 *
 * Description: a function that display the number passed in parameter
 */


void print_all(int n)
{

	if (n / 10)
		print_all(n / 10);


	_putchar(n % 10 + '0');
}
