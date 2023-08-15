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
	int h1, h2, m1, m3;

	for (h1 = 48; h1 < 51; h1++)
	{
		for (h2 = 48; h2 < 52; h2++)
		{
			for (m1 = 48; m1 < 54; m1++)
			{
				for (m2 = 48; m2 <= 57; m2++)
				{
					_printchar(h1);
					_printchar(h2);
					_printchar(':');
					_printchar(m1);
					_printchar(m2);
					_printchar('\n');
				}
			}
		}
	}
}

