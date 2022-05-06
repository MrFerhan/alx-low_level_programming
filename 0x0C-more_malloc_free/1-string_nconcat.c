#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - concatenates two strto newly allocated memory
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes to take from string 2
 *
 * Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < 0)
		return (NULL);
	for (i = 0; i <=n && s2[i] != '\0'; i++)
		;
	for (j = 0; s1[j] != '\0'; j++)
		;
	length = i + j + 1;
	ptr = malloc(sizeof(*ptr) * length);
	ptr[j] = s1[j];
	ptr[i + j] = s2[i];
	return (ptr);
}
