#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: a type int variable
 * @b: a type int variable
 *
 * Return: the result of the addition of a et b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two integers
 * @a: a type int variable
 * @b: a type int variable
 *
 * Return: the result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipliy two integers
 * @a: a type int variable
 * @b: a type int variable
 *
 * Return: the result of a * b;
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: a type int variable
 * @b: a type int variable
 *
 * Return: the result a divided by b;
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the reminder between two integers
 * @a: fist integer to be added
 * @b: second integer to be added
 *
 * Return: the modulos operation between a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
