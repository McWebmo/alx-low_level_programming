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

	while (*(s + counter) != 32)
	{
		len++;
		counter++;
	}

	return (len + 1);

}

/*

 int main(void){

	char *str;
  int len;

	str = "My first strleny";

	printf("%c\n", *(str + 16));
	return (0);

}

*/
