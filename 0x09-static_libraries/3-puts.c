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

void _puts(char *str)
{
	int c;

	c = 0;

	while (*(str + c) != 0)
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
