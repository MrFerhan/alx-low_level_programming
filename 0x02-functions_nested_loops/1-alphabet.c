#include "main.h"

/**
 * print_alphabet - print a to z using putchar
 *
 * Return: always sucess
 */

void print_alphabet(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');

}
