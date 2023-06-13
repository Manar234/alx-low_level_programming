#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array to create
 * @c: char to initlialize array
 * Return: the results
 */
char *create_array(unsigned int size, char c)
{
	char *ch = malloc(size);

	if (ch == 0 || size == 0)
	{
		return (0);
	}

	while (size > 0)
	{
		ch[size] = c;
		size--;
	}
	return (ch);
}
