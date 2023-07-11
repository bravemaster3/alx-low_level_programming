#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees all allocated memory of a grid
 * @grid:: pointer (double pointer) to the grid
 * @height: the number of rows of the grid
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int row = 0;

	for (; row < height; row++)
		free(grid[row]);
	free(grid);
}
