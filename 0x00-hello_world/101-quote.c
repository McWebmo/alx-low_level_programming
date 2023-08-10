#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: this program prints a quote without using printf or puts
 * Return: always 1 (Success)
 */

int main(void)
{
	char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qu, 61);
	return (1);
}
