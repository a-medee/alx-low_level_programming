#include "main.h"
#include <string.h>

/**
 *is_palindrome - check whether a string is a palindrome
 *@s: a pointer-to-char parameter
 *
 *description - a function that checks wether a string is a palindrome
 *Return: 1 if the given string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	return (verify(s, s+ (strlen(s) -1)));
}


/**
 *verify - checks for palindrome
 *@s: a pointer-to-char, representing the first element in the string
 *@p: a pointer-to-char, representing the last element in the string
 *
 *description - check wether a given string is a palindrome
 *Return: type int, 1 being true for the check, 0 false;
 */

int verify(char *s, char *p)
{

	char *prev;

	if (strlen(s) == 0 || strlen(s) == 1)
		return (1);
	if (*s == *p)
	{
		prev = ++s;
		return verify(s,--p);
	}
	else
	{
		return (0);
	}
}
