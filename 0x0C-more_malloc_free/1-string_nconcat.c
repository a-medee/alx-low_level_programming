#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - form a new string from two stings
 * @s1: a pointer to char
 * @s2: a pointer to char
 * @n: the number of bytes to be copied
 *
 * description - append a n bytes copy of s2 onto the end of s1 and
 * put the resulting sting into in a new memory
 * Return: a pointer to the first element of the newly created string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a = NULL;
	unsigned long c;

	if ((s1 == NULL) || (s2 == NULL))
	{
		s2 = "";
		s1 = "";
	}

	c = strlen(s2);
	if (n < c)
	{
		a = n_differ(s1, s2, a, n);
	}
	else
	{
		a = n_issame(s1, s2, a);
	}

	return (a);
}

/**
 * n_differ - form a new string from two stings
 * @s1: a pointer to char
 * @s2: a pointer to char
 * @a: a pointer to the first element of the newly created
 * string
 * @n: the number of bytes to be copied
 *
 * description - append a n bytes copy of s2 onto the end of s1 and
 * put the resulting sting into in a new memory
 * Return: a pointer to the first element of the newly created string
 */

char *n_differ(char *s1, char *s2, char *a, int n)
{
	int count = 0;
	unsigned long b = strlen(s1), c = strlen(s2);
	unsigned long i = 0;

	a = malloc((b + c + 1) * sizeof(char));

	if (a)
	{
		while (i < (b + c))
		{
			if (*s1)
			{
				*(a + i) = *s1++;
			}
			if (!(*s1) && *s2 && count < n)
			{
				*(a + ++i) = *s2++;
				count++;
				continue;
			}
			i++;
		}
		*(a + i) = '\0';
		return (a);
	}
	else
	{
		return (NULL);
	}
}

/**
 * n_issame - form a new string from two stings if
 * @s1: a pointer to char
 * @s2: a pointer to char
 * @a: the resulting string
 *
 * description - append a copy of s2 onto the end of s1 and
 * put the resulting sting into in a new memory
 * Return: a pointer to the first element of the newly created string
 */

char *n_issame(char *s1, char *s2, char *a)
{
	unsigned long b = strlen(s1), c = strlen(s2);
	unsigned long i = 0;

	a = malloc((b + c + 1) * sizeof(char));

	if (a)
	{
		while (i < (b + c))
		{
			if (*s1)
			{
				*(a + i) = *s1++;
			}
			if (!(*s1) && *s2)
			{
				*(a + i) = *s2++;
				continue;
			}
			i++;
		}
		*(a + i) = '\0';
		return (a);
	}
	else
	{
		return (NULL);
	}
}
