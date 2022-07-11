#include "main.h"

/**
 * _abs - return absolute value
 *
 * @r: the int to be checked
 * Return: the value
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
