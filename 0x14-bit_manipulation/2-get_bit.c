#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets value of bit at a given index
 * @n: number
 * @index: index starting from 0, of the bit we want to get
 *
 * Return: Value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);
	hold = n >> index;
	return (hold & 1);
}
