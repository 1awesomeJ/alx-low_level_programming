/**
 * is_prime_number - checks if an integer input is a prime number
 *@n: the integer to be checked
 * Return: 1 if n is prime, 0 if it's not.
 */

int c = 2;
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (c >= n / 2 && n > 4)
	{
		return (1);
	}
	if (n % c == 0)
	{
		return (0);
	}
	c++;
	return (is_prime_number(n));

}
