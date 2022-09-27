#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonal elements of 
 * a square matrix of integers
 * @size: the size of the square matrix
 * @a: the square matrix.
 */
void print_diagsums(int *a[5], int size)
{
	int i, j, sum;
	sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		if (i == j)
		{
		sum += (a)[i][j];
		}
		}
	}
	printf("%d", sum);
}
