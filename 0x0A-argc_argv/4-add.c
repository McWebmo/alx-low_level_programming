#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: add numbers from argument
 *
 * @argc: number of arguments
 * @argv: array of strings of arguments
 *
 * Return: 0 if everything okay, 1 if error
 */

int main(int argc, char *argv[])
{

	char *c;
	int sum = 0;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}

		sum = sum + atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
