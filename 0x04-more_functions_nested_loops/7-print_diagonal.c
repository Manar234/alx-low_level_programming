#include<stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: input the number of times
 * Return: return results
 */
void print_diagonal(int n)
{
	int i;
	int u;

	if (n <= 0)
	putchar('\n');
	else
	{
	for (i = 1 ; i <= n ; i++)
	{
	for (u = 1; u <= i ; u++)
	putchar(' ');
	putchar(92);
	putchar('\n');
	}
	}
}

