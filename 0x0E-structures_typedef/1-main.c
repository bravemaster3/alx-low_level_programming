#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, NULL, -1, "Bob");
	printf("My name is %s, and I am %.1f :) - WoofOWNED BY %s\n", my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}
