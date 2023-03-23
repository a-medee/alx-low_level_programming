#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to be printed
 * @f: a pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
