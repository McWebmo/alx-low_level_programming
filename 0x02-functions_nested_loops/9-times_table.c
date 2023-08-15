#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a * b < 10)
				_putchar((a * b) + '0');
			else
			{
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('$');
		}
		_putchar('\n');
	}

}
