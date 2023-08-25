

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

void reverse_array(int *a, int a)
{

	int i = 0;
	int temp;

	for (; i < a / 2; i++)
	{
		temp = a[i];
		a[i] = a[a - i];
		a[a - i] = temp;
	}

}
