#include "main.h"

/**
 *is_prime_number - prime number
 *@n: a type int parameter
 *
 *description - check wether a number if prime
 *Return: 1 if the given number is a prime number
 *0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (another_funct(n, 2));
}

/**
 *another_funct - check prime number
 *@n: a type int parameter
 *@o: a type int parameter
 *
 *description - a function that checks for prime numbers
 *existence
 *Return: an integer, 1 if the the given number prime and
 *0 otherwise
 */

int another_funct(int n, int o)
{
	int k = o;

	if (k < n)
	{
		if ((n % k) == 0)
		{
			return (0);
		}
		return (another_funct(n, ++k));
	}

	else
	{
		return (1);
	}
}
