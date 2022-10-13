#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints a variable number of arguments passed to it
 *@separator: the separator put between the arguments as they're printed.
 *@n: the number of arguments to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list p;
unsigned int i;
int x;
va_start(p, n);

for (i = 0; i < n; i++)
{
	x = va_arg(p, int);
	printf("%d", x);
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
}
va_end(p);
	printf("\n");
}

