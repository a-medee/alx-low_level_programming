#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenates two strings.
 *@s1: a pointer to char
 *@s2: a pointer to char
 *
 *description - a function that concatenates two strings.
 *Return: a pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned long total_size, i, j = 0;
	char *pointr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	total_size = strlen(s1) + strlen(s2);
	pointr = malloc((total_size + 1) * sizeof(char));

	if (pointr)
	{
		for (i = 0; i < strlen(s1) || j < strlen(s2); i++)
		{
			*(pointr + i) = *(s1 + i);
			if (i >= strlen(s1))
			{
				*(pointr + i) = *(s2 + j);
				j++;
			}
		}
		return (pointr);
	}

	else
	{
		return (NULL);
	}
}
