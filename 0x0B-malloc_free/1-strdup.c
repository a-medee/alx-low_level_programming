#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: a pointer to string
 *
 *description - a function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string
 *given as a parameter.
 *Return: a pointer to char
 */

char *_strdup(char *str)
{
	char *a;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	a = malloc(strlen(str) * sizeof(char));

	if (a)
	{
		strcpy(a, str);
		return (a);
	}
	else
	{
		return (NULL);
	}
}
