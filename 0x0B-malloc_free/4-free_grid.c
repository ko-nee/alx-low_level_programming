#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid created by alloc_grid
 * @grid: 2D grid to be freed
 * @height: height of the grid
 *
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
	{
	return;
	}

	for (x = 0; x < height; x++)
	{
	free(grid[x]);
	}

	free(grid);
}
