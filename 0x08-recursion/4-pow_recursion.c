

/**
 *  _pow_recursion - Entry point
 *
 * Description: a function that returns the value of x raised to the power of y
 *
 * @x: number to be raised
 * @y: power
 *
 * Return: the result, -1 indicates error
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
