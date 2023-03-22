#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a function
 * @size: a type int variable, representing the array size
 * @action: a pointer to the function that array_iterator executes
 * @array: a type int array of size long
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
