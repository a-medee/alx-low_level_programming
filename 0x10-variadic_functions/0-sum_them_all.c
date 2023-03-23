#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all numbers
 * @n: a type int parameter
 *
 * Return: the sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, int);
	}

	va_end(a);
	return (sum);
}
