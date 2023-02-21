#include "main.h"


/**
 * _isalpha - check for alphabetic character
 * @c: c a variable of type integer
 *
 * Description:a function that checks for alphabetic character.
 * Return: 1 if c is a letter, lowercase or uppercase.
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
