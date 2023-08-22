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
	int counter = 0;
	int len = 0;

	while (*(s + counter) != 0)
	{
		len++;
		counter++;
	}



	while (*(s + len) != *(s - 1))
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');

}
