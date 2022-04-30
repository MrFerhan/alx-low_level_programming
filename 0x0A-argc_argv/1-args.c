#include <stdio.h>

/**
 * main - prints name of the program
 * @argc: numbe of arguments in the program
 * @argv: array pointed to the argument held
 * Return: 0
 */

int main(char *argv[] __attribute__((unused)), int *argc)
{
	printf("%d\n", argc);
	return (0);
}
