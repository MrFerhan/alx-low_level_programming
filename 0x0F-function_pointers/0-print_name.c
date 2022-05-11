#include "function_pointers.h"

/**
 * print_name - prints a name by taking parameter for f
 * @name: pointer to name
 * @f: function pointer to be taken as parameter
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
