#include "main.h"

/**
 * _strstr - finds substrings
 * @haystack: chars to scanned
 * @needle: chars to be scanned
 * Return: to the beginning of sbstring found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = 0;
		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			j++;
			k++;
		}
		if (needles[j] == '\0')
			{
				return (haystack + i);
			}
	}
	return (0);
}
