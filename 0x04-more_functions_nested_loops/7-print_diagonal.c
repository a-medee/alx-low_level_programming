#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: formal parmater of type int
 *
 * description: takes in a type int parameter and
 * print a diagonal of that number
 * Return: type void
 */

void print_diagonal(int n)
{
	int i = 1, j = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			for (j = 0; j < i; j++)
			{
				if (j == 0)
				{
					continue;
				}
				_putchar(' ');
			}
			_putchar('\\');

			if (i != n)
			{
				_putchar('\n');
			}
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
