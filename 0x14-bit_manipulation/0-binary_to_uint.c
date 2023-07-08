#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: results
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rem = 0, i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		rem = (rem << 1) + (b[i] - '0');
	}
	return (rem);
}
