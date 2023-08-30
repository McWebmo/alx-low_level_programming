

/**
 * factorial - Entry point
 *
 * Description: finds factorial of a number
 *
 * @n: any integer
 *
 * Return: factorial of n, -1 indicates error
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
