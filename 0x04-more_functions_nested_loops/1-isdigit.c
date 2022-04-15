#include "main.h"

/**
 *
 * _isdigit - chek digit
 * @c: var to be checked
 * Return: 1  0
 */

int _isdigit(int c)
{
	if (c < 9 || c > 0)
	{
		return (0);
	}
	else
		return (1);
}
