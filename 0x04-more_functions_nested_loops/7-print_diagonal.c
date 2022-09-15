#include "main.h"
/**
 * print_diagonal - prints a given number of diagonals
 *
 * @n: the number of diagonals to be printed
 */

void print_diagonal(int n)
{
	int k = 1;
	int t;

	if (n < k)
	{
	_putchar('\n');
	}
	else
	{
	while (k <= n)
	{
		t = 1;
		while (t <= k)
		{
		_putchar(' ');
		if (t == k)
		{
		_putchar('\\');
		_putchar('\n');
		}
		t++;
		}
		k++;
	}
	}
}
