#include "main.h"

/**
 * print_last_digit - return last digit
 *
 * @r: the int to be checked
 * Return: the value
 */

int print_last_digit(int r)
{
	int x;

	x = r % 10;

	if (r < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');

		return (x);
}
