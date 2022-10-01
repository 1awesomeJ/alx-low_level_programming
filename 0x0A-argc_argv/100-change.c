#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins that can add up to certain cents
 * it during executin.
 *@argc: counts the number of arguments passed during execution
 *@argv: vector that stores all arguments as strings which they are
 *Return:  0 on success
 */
int main(int argc, __attribute__((unused))char **argv)
{
	int k, a, b, c, d, e, f, g, h, min;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	k = atoi(argv[1]);

	a = k / 25;
	b = k % 25;
	c = b / 10;
	d = b % 10;
	e = d / 5;
	f = d % 5;
	g = f / 2;
	h = f % 2;
	min = a + c + e + g + h;

	printf("%d\n", min);
	return (0);
}
