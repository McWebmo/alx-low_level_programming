#include "main.h"

/**
 * _abs - absolute value
 *
 * Description: finds absoulute value of n
 * @n: an integer
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		n = ((n * n) / n);

	return (n);
}
