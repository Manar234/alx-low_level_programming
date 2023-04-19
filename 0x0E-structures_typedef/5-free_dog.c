#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_dog - that frees dogs
 * @d: pointer to dog to free
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
