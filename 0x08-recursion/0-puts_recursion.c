#include "main.h"

/**
 *  _puts_recursion - Entry point
 *
 * Description: prints a string, followed by a new line by recursion
 *
 * @s: any string pointer
 *
 * Return: void
 */

void _puts_recursion(char *s)
{

	int i = 0;

	if (s[i] == 0)
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	_puts_recursion(s + 1);

}
