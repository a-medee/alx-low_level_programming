#include "main.h"

/**
 *_pow_recursion - raise to the power
 *@x: a type int parameter
 *@y: a type int parameter
 *
 *description - a function that raises x to the power of y
 *Return: the result of x powered to y, -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
}
