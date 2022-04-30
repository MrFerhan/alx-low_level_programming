#include "main.h"
#include <stdio.h>

/**
 * progname - prints name of the program
 * @argc: numbe of arguments in the program
 * @argv: array pointed to the argument held
 */

int progname(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
