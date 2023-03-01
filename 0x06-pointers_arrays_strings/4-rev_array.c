#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: a pointer-to-int.
 * @n: a type int parameter.
 *
 * description: a function the content of an array
 * Return: a type void
 */


void reverse_array(int *a, int n)
{
	int i, size = n - 1, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[size - i];
		a[size - i] = a[i];
		a[i] = temp;
	}
}
