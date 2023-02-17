#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int a = 0, b = 0, c = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = a; b <= 9 ; b++)
		{
			for (c = b; c <= 9; c++)
			{
				if ((a != b))
				{
					if ((b != c))
					{
						if ((c != a))
						{
							putchar(a % 10 + '0');
							putchar(b % 10 + '0');
							putchar(c % 10 + '0');

							if ((a + b + c) != 24)
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
