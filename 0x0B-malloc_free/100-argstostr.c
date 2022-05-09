#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all argumnts
 * @ac: like argc numberof argmnts
 * @av: arguments
 *
 * Return: null or a pointer to nw_arr
 */

char *argstostr(int ac, char **av)
{
	char *nw_arr, *all_nw_arr;
	unsigned int i, j, k, limit;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += *av[i];
	}
	all_nw_arr = nw_arr = (char *)malloc(sizeof(char) * nw_arr)
		for (j = 0; j < i; j++)
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
