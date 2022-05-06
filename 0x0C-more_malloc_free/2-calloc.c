#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocat memmory of an anrry using malloc
 * @nmemb: num of elemntd in the array
 * @size: size of array
 *
 * Return: poinr to memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}
	return (ptr);
}
