/**
 * _strlen - Entry point
 *
 * Description: returns length of a string
 *
 * @s: a string
 *
 * Return: void
 */

int _strlen(char *s)
{

	int counter = 0;
	int len = 0;

	while (*(s + counter) != 0)
	{
		len++;
		counter++;
	}

	return (len);

}
