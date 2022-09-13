#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

	int n = 1;

	while (n <= 10)
	{
		char k = 'a';

		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);

		_putchar('\n');
		n++;
	}
		return;
}
