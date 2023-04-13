#include "main.h"
#include<stdlib.h>
#include<stddef.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Retrun: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int r;

	s = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	for (r = 0; r < size; r++)
		s[r] = c;
	return (s);
}
