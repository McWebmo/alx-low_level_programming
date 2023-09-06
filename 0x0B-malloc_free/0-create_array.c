#include "main.h"

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char array[];

	if (size == 0) {
		return null;
	}

	array = malloc(size);

	array[0] = c;

	return (*array);

}
