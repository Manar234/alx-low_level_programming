#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return; return results
 */
void more_numbers(void)
{
	int c1, c2, c3;

	for (c1 = 1 ; c1 <= 10 ; c1++)
	{
		for (c2 = 0 ; c2 <= 14 ; c2++)
		{
			c3 = c2;
	if (c2 > 9)
	{
		_putchar(1 + 48);
		c3 = c2 % 10;
	}
	_putchar(c3 + 48);
		}
	_putchar('\n');
}
}
