#include "dog.h"
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
/**
 * print_dog - prints the contents of a struct dog
 * @d: pointer to the struct dog to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
