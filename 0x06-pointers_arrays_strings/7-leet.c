#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * leet - encode a string
 * @str: a pointer-to-char.
 *
 * description: a function that encodes a string into leet
 * Return: a pointer-to-char
 */

char *leet(char *str)
{
	char tab[] = "oltea";
	int i = 0, j;

	while (str[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tolower(str[i]) == tab[j])
			{
				str[i] = '0' + j + 5 * (tab[j] / 116);
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
