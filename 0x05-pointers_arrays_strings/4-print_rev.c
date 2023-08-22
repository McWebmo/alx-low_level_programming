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



	do
	{
		_putchar(*(s + len));
		len--;
	}while (*(s + len) != *(s))
	_putchar('\n');

}
