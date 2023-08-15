#include "main.h"

/**
 * print_sign - to check if a is +ve, -ve or zero
 *
 * Description: checks it using logical operators
 * @n: a number
 *
 *
 * Return: returns 1 if +ve, returns 0 if n is zero, returns -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}


}
