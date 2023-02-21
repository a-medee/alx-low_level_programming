#include <stdlib.h>
#include "main.h"


/**
 * _print_last_digit - returns the value of the last digit
 * @c: c a variable of type integer
 *
 * Description: a function that returns the value of the last digit
 * Return: an integer
 */

int _print_last_digit(int c)
{
	return (abs (c%10));
}
