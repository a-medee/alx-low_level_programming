#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle,a formal parameter of type int
 *
 * description: a function that prints a triangle,
 * followed by a new line.
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = i; j > 1; j--)
			{
				_putchar(' ');
			}

			print_that_hashtags(size - i);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


/**
 * print_that_hashtags - prints a hashtag
 * @size: how many of that hashtags would be printed
 *
 * description: a function that prints hashtags
 * Return: void
 */
void print_that_hashtags(int size)
{
	int i = 0;

	for (i = 0; i <= size; i++)
	{
		_putchar('#');
	}
}
