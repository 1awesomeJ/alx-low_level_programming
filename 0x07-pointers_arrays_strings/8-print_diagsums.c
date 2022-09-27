#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonal elements of
 * a square matrix of integers
 * @size: the size of the square matrix
 * @a: the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum2;

	sum = 0;
	for (i = 0; i < size * size; i += (size + 1))
	{
		sum += a[i];
	}
	sum2 = 0;

	for (i = size - 1 ; i <= size * (size - 1); i += (size - 1))
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum, sum2);
}
