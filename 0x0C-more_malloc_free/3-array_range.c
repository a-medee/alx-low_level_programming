#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - allocate memory for an array of integer whose size is max -min
 * @min: a type int value
 * @max: a type int value
 *
 * Return: a pointer to the new space of memory allocated
 * Or NULL if allocation failed
 */

int *array_range(int min, int max)
{
	int *a, i = 0, size = max - min;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (size + 1));

	if (a)
	{
		for (i = 0; i < size && (min != (max + 1)); i++, min++)
		{
			*(a + i) = min;
		}
		a[i] = max;
		return (a);
	}
	else
	{
		return (NULL);
	}
}
