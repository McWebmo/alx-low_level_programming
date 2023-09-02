#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the files name
 *
 * @argc: number of arguments
 * @argv: array of strings of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);

}
