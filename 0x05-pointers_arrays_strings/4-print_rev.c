#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string array whose characters are to be printed
 */


void print_rev(char *s)
{
	int k;
	int p;
	int n = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		n++;
	}

	for (p = n - 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
