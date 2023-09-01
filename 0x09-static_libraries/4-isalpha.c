#include "main.h"

/**
 * _isalpha - to check if a character is alpahbetic
 *
 * Description: detects it through checking its ascii number
 * @c: parameter c is the char turned to integer
 *
 *
 * Return: if alphabetic return 1, else return 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);


}
