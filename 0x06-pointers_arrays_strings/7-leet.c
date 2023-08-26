

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
	int leet[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	int i;
	int l;

	for (i = 0; s[i] != 0; i++)
	{
		for (l = 0; s[i] != abc[l]; l++)
			continue;
		if (s[i] == abc[l])
			s[i] == leet[l];
	}

	return (s);

}
