#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 * @n: a parameter of type int
 *
 * description: a function that checks for a digit (0 through 9).
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int n)
{
	return (isdigit(n) ? 1 : 0);
}
