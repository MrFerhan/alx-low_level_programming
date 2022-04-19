#include "main.h"

/**
 * _puts - main function to swqp
 *
 * @s: int var to be checked for tis length
 * Return: return 0
 */

void _puts(char *str)
{
	int i = 0;

	for (str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
