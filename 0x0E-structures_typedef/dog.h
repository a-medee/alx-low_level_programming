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



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void copy_into(char *str, char *dest);
typedef struct dog dog_t;
void free_dog(dog_t *);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
