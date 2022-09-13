#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c;

	printf("%lu, %lu", a, b);
	for (count = 3; count <= 50; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
	}
	printf("\n");
	return (0);
}
