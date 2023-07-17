#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog's attributes
 * @d: pointer to the dog struct
 */
void print_dog(struct dog *d)
{
	char *name = d->name, *owner = d->owner;

	if (d != NULL)
	{
		if (d->name == NULL)
			name = "(nil)";
		if (d->owner == NULL)
			owner = "(nil)";
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, d->age, owner);
	}
}
