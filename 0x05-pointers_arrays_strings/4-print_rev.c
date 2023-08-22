#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: prints a string in reverse
 *
 * @s: a string pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int counter = 0;
	int len = 0;

	while (*(s + counter) != 0)
	{
		len++;
		counter++;
	}

	len = len - 1;

	while (*(s + len) != *(s))
	{
		_putchar(*(s + len));
		len--;
	}
	if len <= 0
		_putchar(*s);

	_putchar('\n');

}
