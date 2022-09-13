#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int count = 0;
	int a = 0;
	int b = 1;
	int c = 0;
	int sum = 0;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
		sum = sum + c;
		}
		count++;
	}
	if (c % 2 == 0)
	{
		sum = sum - c;
		}
	printf("%d\n", sum);
	return (0);
}
