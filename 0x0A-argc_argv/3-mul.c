#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints 2 numbers multiplied
 *
 * @argc: number of arguments
 * @argv: array of strings of arguments
 *
 * Return: 0 if okay, 1 if error
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}


	return (0);

}
