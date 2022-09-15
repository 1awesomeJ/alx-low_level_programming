#include "main.h"
/**
 * print_triangle - prints a given size of triangle
 *
 * @size: the size of triangle to be printed
 */

void print_triangle(int size)
{
	int k = 1;
	int t;
	int i;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (k <= size)
	{
		for (t = (size - 1); t >= k; t--)
		{
		_putchar(' ');
		}
		for (i = 1; i <= k; i++)
		{
		_putchar('#');
		}
		k++;
		_putchar('\n');
	}

	}
}
