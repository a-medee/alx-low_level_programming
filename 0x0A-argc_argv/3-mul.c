#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: a type int parameter, representing the arguments count
 * for the main function
 * @argv: a pointer-to-pointer that stores arguments value
 *
 * description: main entry pointer of our program
 * Return: Always 0
 */

int main(int argc, char **argv)
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
