#include "main.h"

/**
 * _islower - to know if char c is lower case
 *
 * Description: detects it through checking its ascii number
 * @c: parameter c is the char turned to integer
 *
 * Return: if c is lower case it returns 1, otherwise it returns 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
