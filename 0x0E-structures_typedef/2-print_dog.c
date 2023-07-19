#include <stdlib>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: struct dog printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nage: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
