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

	if (argc != 2)
	{
		prinf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
		return (0);
	}

}
