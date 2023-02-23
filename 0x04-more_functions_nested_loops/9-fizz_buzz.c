#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fizz_buzz_test();
	return (0);
}

/**
 * fizz_buzz_test - buzz, fizz
 *
 * Return: void
 */
void fizz_buzz_test(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			printf("Fizz ");
		}
		else if (((i % 5) == 0) && ((i % 3) != 0))
		{
			printf("Buzz ");
		}
		else if (((i % 5) == 0) && ((i % 3) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");
}
