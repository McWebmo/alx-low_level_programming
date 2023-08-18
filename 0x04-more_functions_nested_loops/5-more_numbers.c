#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else
			_putchar(i + '0');
	
	}

}
