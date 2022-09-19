#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: the string whose every other character is to be printed
 */




void puts2(char *str)
{
	int k = 0;
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		k++;
	}

	for (n = 0; n < k; n += 2)
	{
		_putchar (str[n]);
	}
	_putchar('\n');
}
