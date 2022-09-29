/**
 * check - checks if a number is prime or not.
 *@n: number to be checked.
 *@c: divisor ro be used recursively on the number
 * Return: 1 if the number is prime, and 0 if it isn't
 */
int check(int n, int c)
{
	if (n % c  == 0)
	return (0);
	if (c > n / 2 && n > 4)
	return (1);
	return (check(n, c + 1));
}

/**
  *is_prime_number - tells whether or not a number is prime.
  *@n: the number to be checked.
  * Return: 0 for non prime numbers,
  * 1 for prime numbers.
  */

int is_prime_number(int n)
{	int t;
	int c = 2;

	if (n < 2)
	t = 0;
	else
	t = check(n, c);
	return (t);
}

