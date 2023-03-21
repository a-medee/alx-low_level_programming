#include "dog.h"

/**
 * init_dog - initilizes a type dog variable
 * @d: a pointer to type dog
 * @name: a pointer to char
 * @age: a type float variable
 * @owner: a pointer to char
 *
 * Description - create a dog named name, age years old
 * who belongs to owner.
 * Return: type void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
