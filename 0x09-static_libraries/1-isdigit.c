#include "main.h"

/**
 * _isdigit - to know if int c is a digit
 *
 * Description: detects it through checking its ascii number
 * @c: parameter c is an integer
 *
 * Return: if c is a digit it returns 1, otherwise it returns 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);



}
