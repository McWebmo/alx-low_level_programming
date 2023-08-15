#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: prints the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void);
{
	int i = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			char c = i;

			_putchar(c);
		}
	}
	_putchar('\n');



}
