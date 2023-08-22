#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
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
}
