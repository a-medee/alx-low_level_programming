#include "main.h"

/**
 * swap_int - swaps the values
 * @a: a parameter of type int *
 * @b: a parameter of type int *
 *
 * description: a function that  that swaps the values of two integers.
 * Return: type void
 */

void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
