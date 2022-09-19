#include "main.h"
/**
 * print_number - prints large integers with _putchar()
 * @n: - the integer to be printed
 * Return: Always 0.
 */

void print_number(int n)
{	int k, r, q;
	if (n >= 0)
 {
	q = n;
	k = 0;
	while (q != 0)
	{
	r = q % 10;
	k = k * 10 + r;
	q = q / 10;
	}
	q = k;
	while(q != 0)
	{
	r = q % 10;
	_putchar(r + '0');
	q = q / 10;
	}
}
	else if (n < 0)
	{
		n = -n;
	_putchar('-');
	q = n;
	k = 0;
	while (q != 0)
	{
	r = q % 10;
	k = k * 10 + r;
	q = q / 10;
	}
	q = k;
	while(q != 0)
	{
	r = q % 10;
	_putchar(r + '0');
	q = q / 10;
	}
	}
}
