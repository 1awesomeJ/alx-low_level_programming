/**
 * check - checks for the square root of a number.
 *@n: number whose square root is to be found.
 *@c: initial guess of the square root value
 * _sqrt_reccursion - returns the square root of a number
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


int _sqrt_recursion(int n)

{	int t;
	int c = 0;

	t = check(n, c);
	return (t);
}

