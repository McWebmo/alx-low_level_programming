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
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar((a * b) + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('$');
		}
		_putchar('\n');
	}

}
