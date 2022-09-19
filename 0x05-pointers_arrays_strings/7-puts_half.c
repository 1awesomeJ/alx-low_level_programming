#include "main.h"
/**
 * puts_half - prints the second half of a string
 *
 * @str: the string whose second half is to be printed
 */


void puts_half(char *str)

{
	int k = 0;
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		k++;
	}
	if k % 2 = 1;
	{
		k= k+1;
	}

	for (n = k / 2; n < k; n++)
	{
		_putchar (str[n]);
	}
	_putchar('\n');
}
