#include "main.h"

/**
 * times_table - prints the times tables from 0 to 9
 *
 * Description: prints it without using stdio.h library
 *
 * Return: void
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a * b < 10)
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((a * b) + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
