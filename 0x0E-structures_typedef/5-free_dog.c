#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free dog type
 * @d: Dog structure
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
