#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *argstostr - concatenates all the arguments
 *@ac: a type int value
 *@av: a pointer-to-pointer
 *
 *Return: a pointer to a new string
 *or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, size = 0, k = 0;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for(j = 0; j < strlen(av[i]); j++)
		{
			size++;
		}
	}
	a = malloc((size + 1) * sizeof(char *));

	if (a)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; j < strlen(*(av + i)); j++, k++)
			{
				a[k] = *(*(av + i) + j);
			}
			a[k++] = '\n';
		}
	}
	else
	{
		return (NULL);
	}

	return (a);

}


/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
