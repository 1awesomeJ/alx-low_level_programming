#include "main.h"
/**
 * print_last_digit - returns the last digit of a number
 *@n: number to be tested
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int k;

	if (n < 0)
	{
	n = -n;
	k = n % 10;
	}
	else
	{
	k = n % 10;
	}
	if (k < 0)
	k = -k;
	_putchar(k + '0');
	return (k);
}
