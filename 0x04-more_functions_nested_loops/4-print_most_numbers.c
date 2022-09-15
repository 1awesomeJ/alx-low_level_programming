#include "main.h"
/**
 * print_most_numbers - prints all the digits excepts 2
 * and 4 using just _putchar()
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		if (k == 2 || k == 4)
			continue;
		_putchar(k + '0');
	}
		_putchar('\n');
}
