#include "main.h"

/**
 * _isdigit - chek digit
 * @c: var to be checked
 * Return: 1  0
 */

int _isdigit(int c)
{
	if (c < 0 || c > 9)
	{
		return (0);
	}
	else
		return (1);
}
