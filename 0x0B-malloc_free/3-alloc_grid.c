#include "main.h"
/**
 * alloc_grid - Output a 2D array of integers
 * @width: parameter to the function
 * @height: parameter to the function
 * Return: 2D grid or NUll if Failure; if Width and height is 0 or
 * negative return NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	/* testing for requirement */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocating memory to the rows of the grid */
	grid = malloc(height * sizeof(int));

	/* testing for memory allocation success */
	if (grid == NULL)
		return (NULL);
	/* loop to allocate memory to the width of the grid */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		/*testing memory allocation success*/
		if (grid[i] == NULL)
		{
			/* freeing previously allocated memory to rows */
			for (j = 0; j < i; j++)
				free(grid[j]);

			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
