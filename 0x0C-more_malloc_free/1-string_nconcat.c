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
	int count = 0;
	unsigned long b = strlen(s1), c = strlen(s2), i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	c = strlen(s2);
	if (n >= c)
	{
		n = c;
	}
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
