

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

char *leet(char *s)
{

	char abc[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[10] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int i;
	int l;

	for (i = 0; s[i] != 0; i++)
	{
		for (l = 0; s[i] != abc[l]; l++)
			continue;
		if (s[i] == abc[l])
			s[i] = leet[l];
	}

	return (s);

}
