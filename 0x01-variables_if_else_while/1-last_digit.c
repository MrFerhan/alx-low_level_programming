#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n;
	int lastdigit = n % 10;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

if (lastdigit>5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
else if (lastdigit==0)
	printf("last digit of %d is %d and is 0\n", n, lastdigit);
else if (lastdigit !=0 && lastdigit<6)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
return (0);
}