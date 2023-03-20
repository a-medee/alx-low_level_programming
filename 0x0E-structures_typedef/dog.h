#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - create a new type named dog
 * @name: a type char * variable
 * @age: a type float variable
 * @owner: a type char * variable
 *
 * Description: a structure that creates a dog type using 3 fieds
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif /* _DOG_H_ */
