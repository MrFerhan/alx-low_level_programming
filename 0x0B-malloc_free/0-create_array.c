#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: array sizae
 * @c: char stored
 *
 * Return: null or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(c) * size);

	if (ptr = NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
