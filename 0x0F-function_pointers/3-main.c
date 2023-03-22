#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: number of argument read in cli
 * @argv: a list of arguments read in cli
 *
 * Return: 0 if everything goes well
 */

int main(int argc, char **argv)
{
	int arg_1, arg_3;
	char *arg_2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg_1 = atoi(argv[1]),	arg_3 = atoi(argv[3]);
	arg_2 = argv[2];

	if ((*arg_2 != '+') && (*arg_2 != '-') && (*arg_2 != '/')
	    && (*arg_2 != '*') && (*arg_2 != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if (((*arg_2 == '/') && (arg_3 == 0)) ||
	    ((*arg_2 == '%') && (arg_3 == 0)))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(arg_2)(arg_1, arg_3));

	return (0);
}
