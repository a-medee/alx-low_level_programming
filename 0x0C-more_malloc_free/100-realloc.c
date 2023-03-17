#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: a pointer to the memory previously allocated with a call to malloc
 *@old_size: is the size, in bytes, of the allocated space for ptr
 *@new_size: is the new size, in bytes of the new memory block
 *
 *Return: ptr if new_size == old_size
 *NULL if new_size is equal to zero, and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i = 0;

	if ((new_size == 0) && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		p = malloc(new_size);
		return (p);
	}

	if (new_size > old_size)
	{
		p = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			*((char *) p + i) = *((char *)ptr + i);
		}
		free(ptr);
		return (p);
	}
	else if (new_size < old_size)
	{
		p = malloc(new_size);
		for (i = 0; i < new_size; i++)
		{
			*((char *)p + i) = *((char *)ptr + i);
		}
		free(ptr);
		return (p);
	}
	else
	{
		return (ptr);
	}

}
