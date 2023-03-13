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

	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])) && (*argv[i]) != '0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				if (atoi(argv[i]) >= 0)
				{
					sum += atoi(argv[i]);
				}
				else
				{
					printf("Error\n");
					return (0);
				}
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", sum);
	}

	return (0);
}
