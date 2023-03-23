#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: input the size
 *
 * Return: return results
 */
void print_square(int size)
{
	int row, colum;

	for (row = 1 ; row <= size ; row++)
	{
		for (colum = 1 ; colum <= size ; colum++)
			_putchar('#');
		_putchar('\n');
	}
}
