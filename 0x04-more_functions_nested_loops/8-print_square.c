#include "main.h"
/**
 * print_square - prints a given size of squares
 *
 * @size: the size of the square to be printed
 */

void print_square(int size)
{
	int k = 1;
	int t;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (k <= size)
	{
		t = 1;
		while (t <= size)
		{
		_putchar('#');
		t++;
		}
		_putchar('\n');
		k++;
	}

	}
}


