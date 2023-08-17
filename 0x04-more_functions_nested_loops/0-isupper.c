#include "main.h"

/**
 * _isupper - to know if char c is upper case
 *
 * Description: detects it through checking its ascii number
 * @c: parameter c is the char turned to integer
 *
 * Return: if c is upper case it returns 1, otherwise it returns 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);



}
