#include "main.h"
/**
 * get_bit - that returns the value of a bit at a given index.
 * @n: int
 * @index: the index of int
 * Return: results
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
