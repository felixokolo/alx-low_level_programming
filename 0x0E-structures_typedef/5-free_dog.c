#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free dog type
 * @d: Dog structure
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
