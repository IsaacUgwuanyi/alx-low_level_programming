#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - Allocates a grid
* @width: width of grid
* @height: height of grid
* Return: Null if it fails
* pointer to grid if it doesn't
*/
int **alloc_grid(int width, int height)
{
	int i, j, x, y, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == 0)
	{
		free(grid);
		for (j = 0 ; j <= i ; j++)
			free(grid[j]);
		return (NULL);
	}
	}
	for (y = 0 ; y < height ; y++)
	{
		for (x = 0 ; x < width ; x++)
		{
			grid[y][x] = 0;
		}
	}
	return (grid);
}
