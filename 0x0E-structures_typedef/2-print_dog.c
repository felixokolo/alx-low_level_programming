#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print dog type
 * @d: struct to be printed
 * Return: None
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (*d).name == NULL ? "(nil)" : (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Name: %s\n", (*d).owner == NULL ? "(nil)" : (*d).owner);
}
