

/**
 * *_strcpy - Entry point
 *
 * Description: copies from source to destination
 *
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i + 1] = 0;

	return (dest);

}
