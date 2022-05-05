#include "main.h"

/**
 * puts2 - fun that prints every other char
 *
 * @str: striing
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}
