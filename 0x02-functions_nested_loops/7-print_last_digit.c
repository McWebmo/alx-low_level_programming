#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * Description: by getting the number mod 10
 * @n: integer n
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;
	int las_ascii;

	if (n >= 0)
	{
		last = n % 10;
		last_ascii = last + 48;
	}
	else if (n < 0)
	{
		n = n * -1;
		last = n % 10;
		last_ascii = last + 48;
	}
	_putchar(last_ascii);

	return (last);
}
