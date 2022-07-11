#include "main.h"

/**
 * _strspn - gets length of chars that matches
 * @s: chars to scanned
 * @accept: chars that matched
 * Return: length of chars that matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
		}

		if (s[j] == '\0')
		return (l);
	}
	return (l);
}
