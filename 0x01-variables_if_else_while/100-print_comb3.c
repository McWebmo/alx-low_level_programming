#include <stdio.h>

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

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			if (i != j && i < j)
			{
				putchar(i + 48);
				putchar(j + 48);

				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}


	return (0);
}
