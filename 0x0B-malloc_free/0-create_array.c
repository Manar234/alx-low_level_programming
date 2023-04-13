#include "main.h"
#include<stdlib.h>
#include<stddef.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *t = malloc(size);

	if (size == 0 || t == 0)
	{
		return (0);
	}
	while (size--)
		t[size] = c;
	return (t);
}
