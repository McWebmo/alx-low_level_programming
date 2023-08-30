

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{

	int i = 0;

	if (i * i >= n)
		return (-1);
	else if (i * i == n)
		return (i);

	if (i * i < n)
	{
		i++;
		return (_sqrt_recursion(i));
	}

}
