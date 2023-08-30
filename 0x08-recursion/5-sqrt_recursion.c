

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

int func(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		i++;
	else if (i * i > n)
		return (-1);

	func(i, n);

	return(i);
}

int _sqrt_recursion(int n)
{

	int i = 0;

	return (func(i, n));

}
