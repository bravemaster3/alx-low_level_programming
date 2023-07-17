#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog's attributes
 * @d: pointer to the dog struct
 */
void print_dog(struct dog *d)
{
	char *name, *owner;

	if (d != NULL)
	{
		if (d->name == NULL)
			name = "(nil)";
		else
			name = d->name;
		if (d->owner == NULL)
			owner = "(nil)";
		else
			owner = d->owner;
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, d->age, owner);
	}
}
