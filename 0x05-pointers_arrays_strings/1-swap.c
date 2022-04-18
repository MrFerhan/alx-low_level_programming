#include "main.h"

/**
 * swap_int - main function to swqp
 *
 * @a: int var to be input
 * @b: in5 var to be input
 * Return: return 0
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}

