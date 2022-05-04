#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return pointer to 2d array ints
 * @width: width
 * @height: height
 *
 * Return: null or a pointer to _grd
 */


int **alloc_grid(int width, int height)
{
	int **_grd;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	_grd = malloc(height * sizeof(int *));
	if (_grd == NULL)
	{
		free(_grd);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		_grd[i] = malloc(width * sizeof(int));
		if (_grd[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(_grd[i]);
			free(_grd);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			_grd[i][j] = 0;
	return (_grd);
}
