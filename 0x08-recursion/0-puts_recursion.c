#include "main.h"

/**
 * _puts_recursion - prints a string using just
 * _putchar function without loops
 *
 *@s: the string to be printed( a pointer to it)
 * Return: Always 0.
 */


void _puts_recursion(char *s)
{
	if (*s != '\0')
	_putchar(*s);
if (*(s + 1) != '\0')
	_puts_recursion(s + 1);
if (*(s + 1) == '\0')
	_putchar('\n');
}

