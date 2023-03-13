
#include <stdio.h>
#include <stdlib.h>


/**
 * check_number - check if string is a number
 * @str: string to check
 *
 * Return: 1 if is a number 0 else
 */

int check_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (i == 0 && (str[i] == '-' || str[i] == '+'))
				return (1);
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 if success 1 else
 */

int main(int argc, char **argv)
{
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_number(argv[i]))
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
