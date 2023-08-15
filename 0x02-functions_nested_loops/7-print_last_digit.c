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
	int last = n % 10;
	
	_putchar(last);

	return (last);
}
