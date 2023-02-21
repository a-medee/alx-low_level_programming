#include "main.h"


/**
 * _abs - computes the absolute value of an integer.
 * @c: c a variable of type integer
 *
 * Description: a function computes the absolute value of an integer.
 * Return: an integer
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-1 * c);
	}

	return (c);
}
