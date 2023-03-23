#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: a string pointer
 * @n: number of string to be printer
 *
 * Description -  print n string followed by separator each
 * Return: a type void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	char *s;

	if (separator)
	{
		va_start(a, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(a, char *);
			if (s == NULL)
			{
				printf("(nil)");
				if (i != (n - 1))
					printf("%s", separator);
			}
			else
			{
				printf("%s", s);
				if (i != (n - 1))
					printf("%s", separator);
			}
		}
		va_end(a);
	}
	printf("\n");
}
