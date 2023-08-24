#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

void puts_half(char *str)
{

	int len;
	int i;

	for (len = 0; str[len] != 0; ++len)
		;

	if (len % 2 != 0)
	{
		i = (len - 1) / 2;

		for (i = 0; str[i] != 0; i++)
			_putchar(str[i]);
	}

	else if (len % 2 == 0)
	{
		i = len / 2;

		for (i = 0; str[i] != 0; i++)
			_putchar(str[i]);
	}



}
