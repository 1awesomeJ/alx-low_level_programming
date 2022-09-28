#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * using just _putchar function without loops
 *
 *@s: the string to be printed( a pointer to it)
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
if (*(s + 1) != '\0')
	_print_rev_recursion(s + 1);
if (*s != '\0')
_putchar(*s);
}

