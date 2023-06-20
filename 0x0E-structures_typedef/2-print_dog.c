#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nill)");
			printf("Age: %.6f\n", d->age);
			printf("Onwer: %s\n", (d->owner != NULL) ? d->owner : "(nill)");
}
