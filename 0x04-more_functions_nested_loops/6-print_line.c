#include "main.h"
/**
 * print_line - prints n lines
 *@n: the number of lines to be printed
 * Return: Always 0.
 */


void print_line(int n)
{
	int k = 1;

	while (k <= n)
		{
	_putchar('_');
	k++;
		}
	_putchar('\n');
}
