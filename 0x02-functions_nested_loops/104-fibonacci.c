#include <stdio.h>
#include <limits.h>
/**
 * main -prints the first 100 fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long int a, b, c, d, e, f;
	int z = 0;

	a = 1, b = 2;
	printf("%lu, %lu", a, b);
	for (count = 3; count <= 98; count++)
	{	c = a + b;
		if (c < b)
			break;
		a = b;
		b = c;
	printf(", %lu", c);
	}
	d = a % 100;
	e = b % 100;
	a /= 100;
	b /= 100;
	for (; count <= 98; count++)
	{	z = 0;
		f = d + e;
		if (f / 100)
		{	c = a + b + 1;
			f %= 100;
		}
		else
		c = a + b;
	if (f < 10)
		z = 1;
	a = b;
	b = c;
	d = e;
	e = f;
	if (z)
	printf(", %lu0%lu", c, f);
	else
	printf(", %lu%lu", c, f);
	}
	printf("\n");
	return (0);
}
