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
			int k = 0;

			while (k <= 9)
			{
				if (i != j && i != k && k != j && i < j && j < k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);

					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}

				}
				k++;
			}
			j++;
		}
	i++;
	}
	putchar('\n');

	return (0);
}
