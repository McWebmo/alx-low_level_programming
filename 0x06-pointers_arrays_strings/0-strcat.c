

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{

	int l;
	int c;
	int cc = 2;

	for (l = 0; src[l] != 0; l++)
		;

	src[l + 1] = dest[0];

	for (c = 1; dest[c] != 0; c++)
	{
		src[l + cc] = dest[c];
		cc++;
	}

	src[l + cc + 1] = 0;

}
