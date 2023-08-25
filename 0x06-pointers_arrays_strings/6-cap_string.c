

/**
 * string_toupper - Entry point
 *
 * Description: changes a string from lower to uppercase
 *
 * @s: a string array
 *
 * Return: array s
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == 32 || s[i] == 9)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				i = i + 1;
				s[i] = s[i] - 32;
			}
		}
		else if (s[i] == 92 && s[i + 1] == 110)
		{
			if (s[i + 2] >= 7 && s[i + 2] <= 122)
			{
				i = i + 2;
				s[i] = s[i] - 32;
			}
		}
	}

	return (s);
}
