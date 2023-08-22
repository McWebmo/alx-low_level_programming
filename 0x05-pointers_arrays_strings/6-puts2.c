#include "main.h"

/**
 * _puts2 - Entry point
 *
 * Description: prints a string to stdout
 *
 * @str: any string
 *
 * Return: void
 */

void puts2(char *str)
{
	int c;

	c = 0;

	while (*(str + c) != 0)
	{
		_putchar(*(str + c));
		c = c + 2;
		int i = c - 1;
	}
	_putchar('\n');
}
