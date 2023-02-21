#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: c a variable of type integer
 *
 * Description: a function that checks for lowercase character.
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int a = 97;
	int b = 122;

	if ((c <= a) && (a <= b))
	{
		return (1);
	}
	return (0);
}
