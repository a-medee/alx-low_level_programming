#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: a type unsigned int formal parameter representing
 * the size we want to allocate
 *
 * Return: type void *
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *a = malloc(b * sizeof(int));

	if (a)
	{
		return (a);
	}
	else
	{
		exit(98);
	}
}
