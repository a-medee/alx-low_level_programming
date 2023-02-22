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

	if (i <= 98)
	{
		while (i <= 98)
		{
			if (i == 98)
			{
				printf("%d",i);
				++i;
			}
			else
			{
				printf("%d, ", i);
				++i;
			}
		}
	}
	else
	{
		while (i >= 98)
		{
			if (i == 98)
			{
				printf("%d",i);
				--i;
			}
			else
			{
				printf("%d, ", i);
				--i;
			}

		}
	}

	printf("\n");
}
