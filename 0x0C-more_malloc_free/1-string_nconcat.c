#include "main.h"
#include <stdlib.h>

/**
 * _strlen - stingth lenght
 * @str: string
 *
 * Return: string lenght
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
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
	int m, i, j, length;

	m = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (m < 0)
		return (NULL);
	if (m >= _strlen(s2))
		m = _strlen(s2);
	length =_strlen(s1) + m + 1;
	ptr = malloc(sizeof(*ptr) * length);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[j] = s1[j];
	for (j = 0; j < m; j++)
		ptr[i + j] = s2[i];
	ptr [i + j] = '\0';
	return (ptr);
}
