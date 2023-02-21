#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{

	int i = 0;

	while (i < 9)
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
