#include "dog.h"

/**
 * init_dog - initialized the values of a struct
 * @d: pointer to the struct
 * @name: pointer to the name of the doc
 * @age: age of the dog
 * @owner: pointer to the owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
