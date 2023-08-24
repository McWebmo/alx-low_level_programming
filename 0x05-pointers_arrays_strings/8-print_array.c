#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * Description: prints a number of elements n of an array of integers
 *
 * @a: array of integers
 * @n: number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (a[i] == a[n])
			printf("\n");
		else
			printf(", ");
	}

}
