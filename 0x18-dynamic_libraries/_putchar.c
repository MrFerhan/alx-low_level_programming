#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: the char to print
 *
 * Return: return 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
