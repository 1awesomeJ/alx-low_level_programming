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

	if (n <= 0)
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
		if (t != 1)
			{
		_putchar(' ');
			}
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
