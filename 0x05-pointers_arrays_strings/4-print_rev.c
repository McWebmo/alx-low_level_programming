#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

void print_rev(char *s)
{

	int len = (_strlen(*s)) - 1;

	while (*(str + len) != *s)
	{
		_putchar(*(str + len));
		c--;
	}
	_putchar('\n');

}
