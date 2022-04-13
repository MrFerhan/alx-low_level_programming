#include "main.h"

/**
 * print_last_digit - return last digit
 * 
 * @r: the int to be checked
 * Return: the value
 */

int _abs(int r)
{
	int x;
	
	x = r % 10;

	if (r < 0)
	{
		x = x * -1;
		return (x);
	}
	else
	{
		return (x);
	}
}
