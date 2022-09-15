#include "main.h"
/**
 * print_number - prints large integers with _putchar()
 * @n: - the integer to be printed
 * Return: Always 0.
 */



void print_number(int n)
{
	if (n >= 0)
	{
		if (n < 10)
		_putchar(n + '0');
		else if (n >= 10 && n < 100)
		{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		}
		else if (n >= 100 && n < 1000)
		{
		_putchar(n / 100 + '0');
		_putchar((n - (n / 100) * 100) / 10 + '0');
		_putchar(n % 10 + '0');
		}
		else
		{
		_putchar(n / 1000 + '0');
		_putchar(((n - (n / 1000) * 1000) / 100) + '0');
		_putchar((n - ((n / 1000) * 1000) -
				       (((n - (n / 1000) * 1000) / 100) * 100)) / 10 + '0');
		_putchar(n % 10 + '0');
		}
	}
	else if (n < 0)
	{
		n = -n;
		if (n < 10)
		{
		_putchar('-');
		_putchar(n + '0');
		}
		else if (n >= 10 && n < 100)
		{
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		}
	}
}
