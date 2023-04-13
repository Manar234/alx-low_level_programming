#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the grid
 * @grid: grid of memories
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int r = 0;

	for (; r < height; r++)
		free(grid[r]);
	free(grid);
}
