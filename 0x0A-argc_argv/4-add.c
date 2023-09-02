#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int i;
	int sum = 0;

	if (*argc == 1)
		printf("0");
	else
	{
		for (i = 1; i < *argc; i++)
		{
			if (*argv[i] >= '0' || *argv[i] <= '9')
			{
				sum = sum + *(argv + i);
			}
			else if (*argv[i] <= '0' || *argv[i] >= '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

}
