#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: input integer
 * Return: results
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n ==  1 || n == 0)
		return (n);
	i = 1;
	while (i * i <= n)
	{
		i++;
	}
	i--;

	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
}
