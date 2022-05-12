#include "3-calc.h"

/**
 * main - checks and gives reuslt
 * @argc: no of arg
 * @argv: values of arg
 *
 * Return: error or result
 */

int main(int argc, char **argv)
{
	int a = 0, b = 0, res = 0;
	char x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	x = (get_op_func(argv[2]))(a, b);
	printf("%d\n", x);
	return (0);
}
