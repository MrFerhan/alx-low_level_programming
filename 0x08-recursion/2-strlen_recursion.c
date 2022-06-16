#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string to count
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
