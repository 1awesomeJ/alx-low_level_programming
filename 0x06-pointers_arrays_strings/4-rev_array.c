#include <stdio.h>
/**
 * reverse_array - prints the elements of an array in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
	if (i != n - 1)
	{
	printf(", ");
	}
	printf("%d", a[i]);
	i--;
	}
	printf("\n");
}
