#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string
 *
 * Return: null or a pointer to dupstr
 */

char *_strdup(char *str)
{
	char *dupstr;
	unsigned int i, j;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	dupstr = (char *)malloc(sizeof(char) * (i + 1));

	if (dupstr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		dupstr[j] = str[j];
	return (dupstr);
}
