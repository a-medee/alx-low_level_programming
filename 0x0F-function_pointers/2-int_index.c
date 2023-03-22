#include "function_pointers.h"

/**
 * int_index - search for an array
 * @size: a type int variable representing the array size
 * @cmp: a pointer to function to be used to compare values
 * @array: the array containing elements of type int
 *
 * Description: int_index searches for an integer inside array using
 * the function cmp.
 * Return: a type int value the index of cmp, -1 if no elements matches,
 * -1 if size <= 0;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			break;
		}
	}

	if (i == size)
	{
		return (-1);
	}
	else
	{
		return (i);
	}
}
