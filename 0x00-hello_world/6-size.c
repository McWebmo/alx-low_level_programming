#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: the program prints a string using puts function from stdio.h
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int schar = sizeof(char);
	int sint = sizeof(int);
	int slong = sizeof(long int);
	int slonglong = sizeof(long long int);
	int sfloat = sizeof(float);

	printf("Size of a char: %d byte(s)\n", schar);
	printf("Size of an int: %d byte(s)\n", sint);
	printf("Size of a long int: %d byte(s)\n", slong);
	printf("Size of a long long int: %d byte(s)\n", slonglong);
	printf("Size of a float: %d byte(s)\n", sfloat);
	return (0);
}
