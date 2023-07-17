#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: pointer to dog name
 * @age: pointer to dog's age
 * @owner: pointer to dog owner's name
 * Return: pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_i;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog_i = malloc(sizeof(dog_t));
	if (dog_i == NULL)
		return (NULL);

	dog_i->name = malloc(strlen(name) + 1);
	if (dog_i->name == NULL)
	{
		free(dog_i);
		return (NULL);
	}
	strcpy(dog_i->name, name);

	dog_i->owner = malloc(strlen(owner) + 1);
	if (dog_i->owner == NULL)
	{
		free(dog_i->name);
		free(dog_i);
		return (NULL);
	}
	strcpy(dog_i->owner, owner);
	dog_i->age = age;
	return (dog_i);
}
