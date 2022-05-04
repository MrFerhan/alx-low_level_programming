#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees to 2d array ints
 * @grid: 2d arrya
 * @height: height
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; heigth >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
