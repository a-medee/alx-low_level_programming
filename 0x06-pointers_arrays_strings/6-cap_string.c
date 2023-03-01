#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalize strings
 * @a: a pointer-to-char.
 *
 * description: a function that capitalizes
 * all words of a string.
 * Return: a type void
 */

char *cap_string(char *a)
{
	unsigned long int size = strlen(a) - 1, i;
	int inword = 0;
	int truth;

	for (i = 0; i < size; i++)
	{
		truth =((ispunct(*(a + i)) || isspace(*(a + i))));
		if (*(a + i) == '.'){
			*(a + (i + 1)) = toupper (*(a + (i + 1)));
		}
		if (!truth && !inword){
			inword = 1;
			*(a + i) = toupper(*(a + i));
		}

		if (isspace(*(a + i)) && inword)
			inword = 0;

	}
	return (a);
}
