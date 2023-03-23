#include "main.h"

/**
 * _isdigit - check if c is digit
 *
 * @c: input for alphabets
 *
 * Return: 1 if c is a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
