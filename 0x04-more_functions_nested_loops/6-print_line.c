#include "main.h"

/**
 * print_line - draws a straight line
 * @n: formal parmater of type int
 *
 * Return: type void
 */

void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
