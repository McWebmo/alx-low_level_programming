

/**
 * _strlen_recursion - Entry point
 *
 * Description: a function that returns the length of a string using recursion
 *
 * @s: string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{

	int i = 0;
	int len = 0;

	if (s[i] == 0)
		return (0);

	len++;

	return (len + _strlen_recursion(s + 1));

}
