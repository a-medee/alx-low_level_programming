#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *print_alphabet - prints the alphabet, in lowercase
 */

void print_alphabet(void)
{

	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a++);
	}

	_putchar('\n');

}
