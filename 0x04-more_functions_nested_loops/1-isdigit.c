#include "main.h"
/**
 * _isdigit - chek digit
 * @c: var to be checked
 * Return: return 1  0
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
