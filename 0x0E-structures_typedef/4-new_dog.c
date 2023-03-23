#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: a pointer to char
 * @age: a type float variable
 * @owner: a pointer to char
 *
 * Description - creates a new dog, stores a copy of name and owner
 * Return: NULL if fails, type void otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = malloc(strlen(name) + 1), *o = malloc(strlen(owner) + 1);
	dog_t *p = malloc(sizeof(dog_t));

	if (n && o && p)
	{
		copy_into(name, n);
		copy_into(owner, o);

		p->owner = o;
		p->age = age;
		p->name = n;
	}

	else
	{
		if(n)
		{
			free(n);
		}
		if (o)
		{
			free(o);
		}
		return (NULL);
	}

	return (p);
}

/**
 * copy_into - copy strings
 * @str: a pointer to char, string to copy
 * @dest: a pointer to char, place to copy to
 *
 * Description - copy str to dest
 */

void copy_into(char *str, char *dest)
{
	unsigned long i;

	for (i = 0; i < strlen(str); i++)
	{
		*(dest + i) = *(str + i);
	}
	*(dest + i) = '\0';
}
