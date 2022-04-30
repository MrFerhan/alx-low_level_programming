#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of the program
 * @argc: numbe of arguments in the program
 * @argv: array pointed to the argument held
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, prod;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	prod = i * j;
	printf("%d\n", prod);
	return (0);
}
