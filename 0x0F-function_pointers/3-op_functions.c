#include "3-calc.h"

/**
 * op_add - sum
 * @a: int 1
 * @b: int 2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - sum
 * @a: int 1
 * @b: int 2
 *
 * Return: sum
 */
int op_mul(int a, int b)
{
	return (a * b);
}

    
/**
 * op_sub - sum
 * @a: int 1
 * @b: int 2
 *
 * Return: sum
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - sum
 * @a: int 1
 * @b: int 2
 *
 * Return: sum
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - sum
 * @a: int 1
 * @b: int 2
 *
 * Return: sum
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
