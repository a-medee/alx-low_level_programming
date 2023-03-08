#include "main.h"

/**
 *_sqrt_recursion - natural square root of a number.
 *@n: a type int parameter
 *
 *description - a function returns that natural square root of a number.
 *Return: an integer, being the natural square root of the n parameter
 */
int _sqrt_recursion(int n)
{
	return (another_function(n, 0));
}


/**
 *another_function - check for square number
 *@n: a type int parameter
 *@o: a type int parameter
 *
 *description - a function that checks for square number
 *perfect square existence
 *Return: an integer, -1 if the square number isn't found
 *and the perfect square if any
 */

int another_function(int n, int o)
{
	int k = o;

	if (k <= n)
	{
		if (k * k == n)
		{
			return (k);
		}
		return (another_function(n, ++k));
	}

	else
	{
		k = -1;
		return (k);
	}
}
