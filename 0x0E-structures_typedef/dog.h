#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new data type to describe dogs
 * @name: pointer to the dog name
 * @age: dog's age
 * @owner: pointer to the dog owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /*DOG_H*/
