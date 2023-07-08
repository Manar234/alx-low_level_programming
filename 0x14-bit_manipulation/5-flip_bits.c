#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: int
 * @m: int 2
 * Return: results
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int c = 0;

	while (x > 0)
	{
		c += x & 1;
		x >>= 1;
	}
	return (c);
}

