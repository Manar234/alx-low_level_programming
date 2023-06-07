#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: input integer
 * Return: results
 */
int squre(int n, int val);
int _sqrt_recursion(int n)
{
	return (squre(n, 1));
}
/**
 * squre - return natural squre root
 * @n: int
 * @val: qqure root
 * Return: int
 */
int squre(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (squre(n, val + 1));
	else
		return (-1);
}
