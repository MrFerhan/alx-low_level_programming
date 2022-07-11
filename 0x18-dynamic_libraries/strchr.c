#include "main.h"

/**
 * _strchr - locates charachter in string
 * @c: a specific character to search for
 * @s: a string to be searched from
 * Return: char value of dest
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
