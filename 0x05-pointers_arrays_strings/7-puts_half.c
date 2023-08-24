#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: prints the second half of any string
 *
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{

	int len;
	int i;

	for (len = 0; str[len] != 0; len++)
		;

	if (len % 2 != 0)
	{
		i = (len + 1) / 2;

		for (; str[i] != 0; i++)
			_putchar(str[i]);
	}

	else if (len % 2 == 0)
	{
		i = len / 2;

		for (; str[i] != 0; i++)
			_putchar(str[i]);
	}

	_putchar('\n');


}
