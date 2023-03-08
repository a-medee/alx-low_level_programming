#include "main.h"

/**
 *factorial - factorial of a given number
 *@n: an integer whose factorial would be returned
 *
 *description - a function the returns the factorial of
 *a given number
 *Return: an integer being the facturial of the passed integer
 *if the given number if less than zero return -1 instead.
 *-1 being a signal for errors
 */

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		else
			return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
