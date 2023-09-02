#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins given the change
 *
 * twentyfives - returns number of 25 coins
 * tens - returns number fo 10 coins
 * fives - returns number of 5 coins
 * twos - return number of 2 coins
 * ones - return number of 1 coins
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */


int twentyfives(int x)
{
	int y = x / 25;
	if (x / 25 < 1)
		return (0);
	else
		return (y);
}

int tens(int x)
{
	int y = x / 10;
	if (x / 10 < 1)
		return (0);
	else
		return (y);
}

int fives(int x)
{
	int y = x / 5;
	if (x / 5 < 1)
		return (0);
	else
		return (y);
}

int twos(int x)
{
	int y = x / 2;
	if (x / 2 < 1)
		return (0);
	else
		return (y);
}


int main(int argc, char *argv[])
{

	int cents;
	scanf("%d", &cents);
	int coins = 0;
	(void)argc;

	while (cents > 0)
	{

		if (cents > 25)
		{
			coins += twentyfives(cents);
			cents -= twentyfives(cents) * 25;
			continue;
		}
		else if (cents == 25)
		{
			coins++;
			break;
		}
		else if (cents < 25)
		{
			if (cents > 10)
			{
				coins += tens(cents);
				cents -= tens(cents) * 10;
				continue;
			}
			else if (cents == 10)
			{
				coins++;
				break;
			}
			else if (cents < 10)
			{
				if (cents > 5)
				{
					coins += fives(cents);
					cents -= fives(cents) * 5;
					continue;
				}
				else if (cents == 5)
				{
					coins++;
					break;
				}
				else if (cents < 5)
				{
					if (cents > 2)
					{
						coins += twos(cents);
						cents -= twos(cents) * 2;
						continue;
					}
					else if (cents == 2)
					{
						coins++;
						break;
					}
					else if (cents < 2)
					{
						coins++;
						cents--;
						break;
					}
				}
			}
		}

	}

	printf("%d\n", coins);
	return (0);
}


