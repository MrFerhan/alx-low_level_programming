#include "main.h"



/**
 * print_most_numbers - Prints numbers 2 and 4.
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x != 2 && x != 4)
			_putchar((x % 10) + '0');
	}
	_putchar('\n');
}
