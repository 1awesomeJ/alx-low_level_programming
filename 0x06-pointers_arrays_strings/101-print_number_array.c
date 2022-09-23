#include "main.h"
/**
 * print_number - prints any number using just _putchar
 *
 * @n: the number to be printed
 */




void print_number(int n)
{
	int a, d, i, j;
	int ar[10], ra[10];
if (n == 0)
	_putchar('0');
if (n < 0)
{
	_putchar('-');
	n = -n;
}

a = n;
d = 0;
while (a > 0)
{
	a = a / 10;
	d++;
}

for (i = 0; i < d; i++)
{
	ra[i] = n % 10;
	n = n / 10;
}

j = 0;

for (i = d - 1; i >= 0; i--)
{
	ar[j] = ra[i];
	j++;
}

for (j = 0; j < d; j++)
{
	_putchar(ar[j] + '0');
}
}
