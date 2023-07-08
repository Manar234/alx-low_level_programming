#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: int
 * @index: index for n
 * Return: results
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1ul << index);

	return (1);
}
