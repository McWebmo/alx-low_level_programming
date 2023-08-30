

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: 0
 */

int is_prime_number(int n)
{

	int i = 0;
	int *s = &i;

	if (n % *s != 0 && *s < n)
	{
		*s = *s + 1;
		is_prime_number(n);
	}
	else
		return (0);

	return (1);

}
