#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates arrarys of integer
 * @min: min value
 * @max: max value
 *
 * Return: poinr to new array or NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, range;

	if (min > max)
		return (NULL);
	range = ((max + 1) - min);
	ptr = malloc(range * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
