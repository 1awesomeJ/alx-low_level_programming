#include "main.h"
/**
 * print_number - prints large integers with _putchar()
 * @n: - the integer to be printed
 * Return: Always 0.
 */

void print_number(int n)
{	unsigned int k, r, q, t;
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	else
	{
	n = n;
	}
	q = n;
	k = 0;
	while (q != 0)
	{
	r = q % 10;
	k = k * 10 + r;
	q = q / 10;
	}
	q = k;
	if (q == 1)
	{
	t = q * 10;
	_putchar(t/10 + '0');
	_putchar(t % 10 + '0');
	}
	while (q != 0 && q != 1)
	{
	r = q % 10;
	_putchar(r + '0');
	q = q / 10;
	}
	if (n == 0)
	_putchar (n + '0');
}
