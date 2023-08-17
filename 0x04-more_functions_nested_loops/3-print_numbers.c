#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: prints numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{

	int i = 0;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
