#include "main.h"

/**
 * _puts - main function to swqp
 *
 * @str: int var to be checked for tis length
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
