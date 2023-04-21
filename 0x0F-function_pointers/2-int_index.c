#include"function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: integer array
 * @size: the size of the array
 * @cmp: the compare function
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}