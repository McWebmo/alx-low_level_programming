#include "main.h"

/**
 * _puts - Entry point
 *
 * Description: prints a string to stdout
 *
 * @str: any string
 *
 * Return: void
 */

void _puts2(char *str)
{
	int c;

	c = 0;

	while (*(str + c) != 0 || *(str + c - 1) != 0)
	{
		_putchar(*(str + c));
		c = c + 2;
	}
	_putchar('\n');
}
