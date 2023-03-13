#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars using malloc
 * @size: the size of the memory to print
 * @c: a character to fill in the array to be created
 *
 * Return: pointer-to-char.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	if (!size)
	{
		return (NULL);

	}

	a = malloc(sizeof(char) * size);

	if (a)
	{
		for (i = 0; i < size; i++)
		{
			*(a + i) = c;
		}
		return (a);
	}
	else
	{
		return (NULL);
	}

}
