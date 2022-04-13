#include "main.h"

/**
 * print_sign - check lower case
 *
 * @n: the int  to check
 * Return: 0 ro 1
 */

int print_sign(int n)
{
int ret;

	if (n > 0)
	{
		ret = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		ret = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		ret = -1;
		_putchar('-');
	}
return (ret);
}
