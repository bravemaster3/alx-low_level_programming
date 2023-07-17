#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: pointer to dog name
 * @age: pointer to dog's age
 * @owner: pointer to dog owner's name
 * Return: pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_i = malloc(sizeof(dog_t));

	if (dog_i == NULL)
	{
		free(dog_i);
		return (NULL);
	}
	dog_i->name = name;
	dog_i->age = age;
	dog_i->owner = owner;
	return (dog_i);
}
