#include "main.h"

/**
 * _islower - check lower case
 *
 * @c: the int  to check
 * Return: 0 ro 1
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
