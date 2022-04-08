#include <stdio.h>



/**
 * main - start
 *
 * Return: Aways 0
 *
 */

int main(void)

{char ch = 'a';



	while (ch <= 'z')

	{

		if (ch != 'e' && ch != 'q')

		{

			putchar(ch);

		}

		ch++;

	}

	putchar('\n');

	return (0);

}
