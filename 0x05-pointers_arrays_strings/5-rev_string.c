#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: a function that reverses a string using pointers
 *
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{


	int len, i;
	char temp;

	for (len = 0; s[len] != 0; ++len)
		;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

}
