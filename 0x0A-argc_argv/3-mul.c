#include <stdio.h>
#include "main.h"

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
	int num1 = *argv[1];
	int num2 = *argv[2];

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", num1 * num2);
		return (0);
	}

}
