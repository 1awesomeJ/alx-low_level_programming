#include "main.h"
/**
 * _puts - prints all the characters in a string
 *
 * @str: the string whose characters are to be printed
 */



void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
