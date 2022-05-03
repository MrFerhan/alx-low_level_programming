#include "main.h"
#include <stdlib.h>
/**
 * str_concat - brings to strings togther
 * @s1: string 1
 * @s2: string 2
 *
 * Return: null or a pointer to nw_arr
 */

char *str_concat(char *s1, char *s2)
{
	char *nw_arr;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	nw_arr = malloc(sizeof(char) * (i + j + 1));

	if (nw_arr == NULL)
	{
		free(nw_arr);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		nw_arr[k] = s1[k];
	limit = j;
	for (j = 0; j <= limit; k++, j++)
		nw_arr[k] = s2[j];

	return (nw_arr);
}
