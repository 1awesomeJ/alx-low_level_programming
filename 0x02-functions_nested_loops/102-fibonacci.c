#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long long int a = 0;
	unsigned long long int b = 1;
	unsigned long long int c;

	printf("%llu, %llu", a, b);
	for (count = 3; count <= 50; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %llu", c);
	}
	printf("\n");
	return (0);
}
