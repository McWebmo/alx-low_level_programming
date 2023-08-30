

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
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
