#include "main.h"

/**
 * _strpbrk - search for chars that matches
 * @s: chars to scanned
 * @accept: chars to be scanned
 * Return: chars that matched
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	unsigned int l = 0;

	for (i = 0; s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s[i]);
			}
		}
		i++;
	}
	return (0);
}
