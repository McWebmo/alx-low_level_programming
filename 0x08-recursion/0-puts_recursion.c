#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
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
	_putchar(_puts_recursion(*(s + 1)));

}
