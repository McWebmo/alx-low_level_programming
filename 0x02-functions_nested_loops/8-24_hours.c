#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 48; h1 < 51; h1++)
	{
		for (h2 = 48; h2 < 52; h2++)
		{
			for (m1 = 48; m1 < 54; m1++)
			{
				for (m2 = 48; m2 <= 57; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(58);
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}
}

