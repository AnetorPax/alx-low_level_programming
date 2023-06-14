#include "main.h"
/**
 * free_grid - It frees the memory previously created by alloc_grid
 * @grid: Parameter to the function
 * @height: parameter to the function
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
