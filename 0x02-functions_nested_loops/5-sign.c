#include "main.h"

/**
 * _print_sign - check lower case
 *
 * @n: the int  to check
 * Return: 0 ro 1
 */

int print_sign(int n)
{
	if (n > 0 )
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}