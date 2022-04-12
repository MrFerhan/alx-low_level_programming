#include "main.h"

/**
 * print_alphabet - Write a program that prints _putchar, followed by a new line
 *
 * Return: always sucess
 */

void print_alphabet(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar('x');
		x++;
	}
	_putchar('\n');

}
