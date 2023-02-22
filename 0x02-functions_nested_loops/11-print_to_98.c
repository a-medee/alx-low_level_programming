#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: a parameter of type int
 *
 * description: a function that prints all natural numbers from n to
 * 98, followed by a new line
 * Return: void
 */

void print_to_98(int n)
{
	int i = n;

	while (i <= 98)
	{
		printf("%d, ", i);
		++i;
	}

	printf("\n");
}