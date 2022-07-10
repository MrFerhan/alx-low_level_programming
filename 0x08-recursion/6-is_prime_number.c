#include "main.h"
/**
 * is_prime_num - helper fun
 * @n: number
 * @x: numbere
 *
 * Return: output
 */
int is_prime_num(int n, int x)
{
	if (n <= 1 || (n != x && n % x == 0))
	{
		return (0);
	}
	else if (n == x)
	{
		return (1);
	}
	return (is_prime_num(n, x + 1));
}
/**
 * is_prime_number - returns 1 if prime otherwise return 0
 * @n: number
 *
 * Return: output
 */
int is_prime_number(int n)
{
	return (is_prime_num(n, 2));
}
