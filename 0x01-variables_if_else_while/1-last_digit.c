#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

int main(void)
{
	int n = 0;
	int last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

	return (0);
}
