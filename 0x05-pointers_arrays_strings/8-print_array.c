#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to type int
 * @b: a parameter of type int;
 *
 * description - the function should print the second half of the string
 * Return: void
 */

void print_array(int *a, int b)
{
	int i = 0;

	while (i < b)
	{
		if (i != (b - 1))
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
		i++;
	}

	printf("\n");
}
