/**
 * check - checks for the square root of a number.
 *@n: number whose square root is to be found.
 *@c: initial guess of the square root value
 * Return: the square root value or -1 if number has no natural square root
 */
int check(int n, int c)
{
	if (c * c == n)
	return (c);
	if (c > n / 2)
	return (-1);
	return (check(n, c + 1));
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  *@n: the number whose square root is to be found
  * Return: the square root value
  *or -1 if the number doesn't have a natural square root.
  */
int _sqrt_recursion(int n)

{	int t;
	int c = 0;

	t = check(n, c);
	return (t);
}

