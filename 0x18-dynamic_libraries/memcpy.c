#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination to be copied to
 * @src: memory area to be copied from
 * @n: number of times to copy
 * Return: char value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
