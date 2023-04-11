#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <sys/types.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number whose bit is to be changed
 * @index: the index we want to change
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

        (*n) |= (1 << index);
	return (1);
}
