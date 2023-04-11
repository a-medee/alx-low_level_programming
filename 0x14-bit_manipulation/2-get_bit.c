#include "main.h"
#include <limits.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whose byte is to check from
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int r;

	n >>= (index);

	r = n & 1;

	if ((r != 0) && (r != 1))
		return (-1);
	return (r);
}
