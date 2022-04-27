#include "main.h"

/**
 * _memset -  fills a block of memory with a particular value
 * @s: pointer to start from
 * @b: constant value to be set
 * @n: number of times to add the value
 * Return: char value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
		return (s);
}
