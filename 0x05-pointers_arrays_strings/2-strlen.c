#include "main.h"

/**
 * _strlen - main function to swqp
 *
 * @s: int var to be checked for tis length
 * Return: return 0
 */

int _strlen(char *s)
{
	int LOF;
	int i = 0;

	for (LOF = 0; s[LOF] != '\0'; LOF++)
	{
		i++;
	}
	return (i);
}
