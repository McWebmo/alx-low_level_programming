
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

	return (dest);
}

/*
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    //printf("%s", s1);
//    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
*/
