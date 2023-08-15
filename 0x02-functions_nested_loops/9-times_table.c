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
