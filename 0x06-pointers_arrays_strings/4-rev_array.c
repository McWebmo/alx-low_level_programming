#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{

	int i = 0;
	int temp;

	for (; i < n / 2; i++)
	{
		temp = *(a + n);
		*(a + n) = *(a + n - i);
		*(a + n - i) = temp;
	}

}
