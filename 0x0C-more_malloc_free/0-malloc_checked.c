#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include<stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: int
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
