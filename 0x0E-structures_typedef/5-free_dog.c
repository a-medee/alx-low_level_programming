#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: a pointer to dog_t
 *
 * Return: type void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
