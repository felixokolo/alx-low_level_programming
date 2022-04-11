#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Initialize dog type
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof d);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
