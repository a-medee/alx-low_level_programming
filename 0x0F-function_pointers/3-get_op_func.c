#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - select the operation that the user asked for
 * @s: the operator the user choosed
 *
 * Return: a type int pointer to a function
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div},
		      {"%", op_mod}, {NULL, NULL}};
	unsigned long i = 0;

	while (i < sizeof(ops) / sizeof(op_t))
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;

	}

	return (NULL);

}
