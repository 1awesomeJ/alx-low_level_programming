#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	long int d;
	long int f;

	for (d = 2; d < n; d++)
	{

	if (n % d == 0)
	{
		f = n / d;
		d = d * 2;
		n = f;
	}
	}
	printf("%ld\n", f);
	return (0);
}
