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


	int counter = 0;
	int len = 0;
	int right = len;
	int left = 0;
	char temp;


	while (*(s + counter) != 0)
	{
		len++;
		counter++;
	}

	for (left = 0; left != right; left++;)
	{
		temp = *(s + left);
		*(s + left) = *(s + right);
		*(s + right) = temp;
		
		right--;
	}


}
