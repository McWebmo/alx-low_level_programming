

/**
 * secondary - Entry point
 *
 * Description: supporting fucntion for the main secondarytion
 *
 * @i: i is the numbers being sqaured
 * @n: n is the number we would like to find a sqrt for
 *
 * Return: returns i
 */

int secondary(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		i++;
	else if (i * i > n)
		return (-1);


	return (secondary(i, n));
}

/**
 * _sqrt_recursion - Entry point
 *
 * Description: finds square root of a number n
 *
 * @n: number to find the square root of
 *
 * Return: returns the square root or -1 if there is no natural square root
 */

int _sqrt_recursion(int n)
{

	int i = 0;

	return (secondary(i, n));

}
