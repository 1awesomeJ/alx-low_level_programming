/**
 *_pow_recursion - calculates the value of an integer raised to a given
 * power
 *@x: the integer which is raised to a power
 *@y: the power/ exponent to which x is raised
 *Return: the factorial of n.
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}

