#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - convert and print a binary representation of a number
 * @n: the number to be converted
 *
 * Return: type void
 */

void print_binary(unsigned long int n)
{
	unsigned long int r;

	r = n & 1;

	if (n >= 2)
		print_binary(n >> 1);

	_putchar(r == 0 ? '0' : '1');
}
