#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - a pointer to a 2 dimensional array
 *@width: a type int value
 *@height: a type int value
 *
 *description - a function that returns a pointer to a 2 dimensional
 *array of integers.
 *Return: a point-to-a-pointer
 */

int **alloc_grid(int width, int height)
{
	int **p  = malloc(sizeof(int) * height), i, j;

	if (p)
	{
		for (i = 0; i < height; i++)
		{
			*(p + i) = (int *) malloc(width * sizeof(int));
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				*(*(p + i) + j) = 0;
			}
		}
		return (p);
	}

	return (NULL);
}
