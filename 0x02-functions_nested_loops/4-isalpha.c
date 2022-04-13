#include "main.h"

/**
 * _isalpha - check lower case
 *
 * @c: the int  to check
 * Return: 0 ro 1
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
