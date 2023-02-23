#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @n: a parameter of type int
 *
 * description: a function that checks for uppercase character.
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int n)
{
	return (isupper(n) ? 1 : 0);
}
