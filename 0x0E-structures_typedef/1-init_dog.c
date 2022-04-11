#include "dog.h"

/**
 * init_dog - Initialize dog type
 * @d: struct to be initialized
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
