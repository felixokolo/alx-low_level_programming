#include <stdlib.h>
#include <string.h>
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
	char *n = malloc(sizeof name);
	char *o = malloc(sizeof owner);

	if (d == NULL || n == NULL || o == NULL)
	{
		free(n);
		free(o);
		free(d);
		return (NULL);
	}

	strcpy(n, name);
	strcpy(o, owner);

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
