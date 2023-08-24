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


	// we need to reverse 

	int counter = 0;
	int len = 0;

	while (*(s + counter) != 0)
	{
		len++;
		counter++;
	}

	int right = len;
	int left = 0;

	for (; left != right; ;)
	{
		temp = *(s + left);
		*(s + left) = *(s + right);
		*(s + right) = temp;
		left++;
		right--;
	}


}
