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
	int i, j, sum = 0;
	
	if (argc <= 1)
		{
		printf("0\n");
		return (0);
		}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
			sum += atoi(argv[i]);
			}
			else
			{
			printf("Error\n");
			return (1);
			}
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
