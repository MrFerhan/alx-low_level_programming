#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of its own function
 * @argc: size of args
 * @argv: values of args
 *
 * Return: Error or result
 */

int main (int argc, char **argv)
{
	int i, byte;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i <(byte - 1); i++)
	{
		if (byte != 0)
			printf("%02hhx", ((char *)main)[i]);
	}
	printf("%02hhx", ((char *)main)[i]);
	return (0);
}
