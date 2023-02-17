#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int a = 0;
	char b = 'a';

	while (a < 10)
	{
		putchar(a % 10 + '0');
		a++;
	}

	while (b <= 'f')
	{
		putchar(b++);
	}
	putchar('\n');

	return (0);
}
