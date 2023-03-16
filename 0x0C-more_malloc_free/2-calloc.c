#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for array using malloc
 * @nmemb: the number of bytes to allocate
 * @size: the size the size in bytes of a single nmemb element
 *
 * Return: a type void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned long i = 0;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	a = malloc(nmemb * size);

	if (a)
	{
		for (i = 0; i < size; i++)
		{
			*(a + i) = 0;
		}
		return (a);
	}
	else
	{
		return (NULL);
	}
}

