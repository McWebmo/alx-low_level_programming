#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: prints charchter _ n times
 *
 * @n: number of times _ is printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			break;

		_putchar('_');
	}

	_putchar('\n');

}
