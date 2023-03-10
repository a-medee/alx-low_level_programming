#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - a pointer to a 2 dimensional array
 *@width: a type int value
 *@height: a type int value
 *
 *description - a function that returns a pointer to a 2 dimensional
 *array of integers.
 *Return: a point-to-a-pointer, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			*(p + i) = malloc(width * sizeof(int));
			if ((*(p + i)) == NULL)
			{
				for (; j >= 0; j--)
					free(p[j]);
				free(p);
				return (NULL);
			}

		}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				p[i][j] = 0;
	}
	return (p);

}
