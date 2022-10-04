#include <stdlib.h>

/**
 * free_grid - frees all memory allocated by another function
 *to a 2D array of integers.
 *@height: height of the array.( number of rows)
 *@grid: the 2D array- a pointer of pointers to its rows.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
