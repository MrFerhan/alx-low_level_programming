#include "main.h"

/**
 * print_alphabet_x10 - print a to z x10 using putchar
 *
 * Return: always sucess
 */

void print_alphabet_x10(void)
{
	char x = 'a';
	int y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	}
	y++;
}
