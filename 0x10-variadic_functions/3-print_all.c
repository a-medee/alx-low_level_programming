#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - print anything.
 * @formal: a list of type arguments
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int d;
	int i = 0;
	char c, *s;
	float f;

	if (format)
	{
		va_start(ap, format);
		while (*(format + i))
		{
			switch (*(format + i++))
			{
			case 's':
				s = va_arg(ap, char *);
				printf("%s, ", s);
				break;
			case 'i':
				d = va_arg(ap, int);
				printf("%d, ", d);
				break;
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c, ", c);
				break;
			case 'f':
				f = (float) va_arg(ap, double);
				printf("%f, ", f);
				break;
			default:
				continue;
			}
		}
		va_end(ap);
	}

	printf("\n");
}
