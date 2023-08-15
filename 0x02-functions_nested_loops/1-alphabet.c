#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Description: prints the alphabet
 *
 * Return: void
 */


void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i < 123; i++)
	{
		char c = i;

		_putchar(c);
	}

	_putchar('\n');

}
