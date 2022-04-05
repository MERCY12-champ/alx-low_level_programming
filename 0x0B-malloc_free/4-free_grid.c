#include <stdlib.h>

/**
 * free_grid - frees 2 - dimension arrays of the grid
 * @grid: grid of memories to be freed
 * @height: height used.
 * Return: void
 */

void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
	free(grid[i]);
free(grid);
}
