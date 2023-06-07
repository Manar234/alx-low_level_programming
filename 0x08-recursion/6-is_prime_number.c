#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number
 * otherwise return 0.
 * @n: int
 * @val: prime number
 * Return: 1 or 0
 */
int pre(int n, int val);
int is_prime_number(int n)
{
	return (pre(n, 2));
}
/**
 * pre - function to return prime number
 * @n: int
 * @val: prime number
 * Return: 0 or 1
 */
int pre(int n, int val)
{
	if (n < 2)
	return (0);
	else if (n == 0)
	return (1);
	else if (val * val > n)
	return (1);
	else if (n % val == 0)
	return (0);
	else
	return (pre(n, val + 1));
}
