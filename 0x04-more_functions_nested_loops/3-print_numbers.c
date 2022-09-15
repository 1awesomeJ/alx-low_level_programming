#include "main.h"

/**
 * print_numbers - prints the digits 0-9 using just _putcahar()
 *
 * Return: Always 0.
 */


void print_numbers(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		_putchar(k + '0');
	}
		_putchar('\n');
}
