#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: a string pointer
 * @n: a type int variable
 *
 * Description - print n numbers separated by separator each
 * Return: a type void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i = 0;

	if (separator)
	{
		va_start(a, n);
		for(i = 0; i < n; i++)
		{
			printf("%d", va_arg(a, int));
			if (i != (n - 1))
				printf("%s", separator);
		}
		va_end(a);
	}

	printf("\n");
}
