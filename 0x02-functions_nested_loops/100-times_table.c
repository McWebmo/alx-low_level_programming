#include "main.h"

/**
 * print_times_table - prints the times tables from 0 to n
 *
 * Description: prints it without using stdio.h library
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a, b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (a * b < 10)
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((a * b) + '0');
				}
				else if (a * b >= 10)
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(((a * b) / 10) + '0');
					_putchar(((a * b) % 10) + '0');
				}
				else if (a * b >= 100)
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar((((a * b) / 100) % 10) + '0');
					_putchar((((a * b) / 10) % 10) + '0');
					_putchar(((a * b) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

}
