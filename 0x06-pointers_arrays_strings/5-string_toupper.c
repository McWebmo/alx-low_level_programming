

/**
 * string_toupper - Entry point
 *
 * Description: changes a string from lower to uppercase
 *
 * @s: a string array
 *
 * Return: array s
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}

	return (s);
}
