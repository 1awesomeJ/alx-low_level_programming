#include "main.h"
/**
 * more_numbers - prints the numbers 0 to 14
 * ten times over
 * Return: Always 0.
 */

void more_numbers(void)
{
	int k;
	int t;

	for (t = 1; t <= 10; t++)
	{
		for (k = 0; k < 15; k++)
	{
		if (k > 9)
		{
		_putchar(k / 10 + '0');
		}
		_putchar(k % 10 + '0');
	}
	_putchar('\n');
	}
}
