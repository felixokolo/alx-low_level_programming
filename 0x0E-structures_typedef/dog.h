#ifndef INCLUDE_GUARD
#define INCLUDE_GUARD

/**
 * struct dog - Defines characteristics of a dog
 * @name: Name of defined dog
 * @age: Age of defined dog
 * @owner: Owner of defined dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
