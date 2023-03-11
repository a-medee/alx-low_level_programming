#include <stdio.h>

/**
 * main - check the code
 * @argc: a type int parameter, representing the arguments count
 * for the main function
 * @argv: a pointer-to-pointer that stores arguments value
 *
 * description: main entry pointer of our program
 * Return: Always 0
 */

int main(int argc, char **argv __attribute__((unused)))
{


	printf("%d\n", argc - 1);

	return (0);
}
