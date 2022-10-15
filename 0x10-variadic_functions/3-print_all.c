#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints any type of variable number of arguments.
 *
 *@format: format of the variables.
 */



void print_all(const char * const format, ...)
{	int i, j, k;
	char *p, *str;
	va_list prnt;

	k = strlen(format);
	p = "cfis";
	va_start(prnt, format);
	i = 0;
	while (i < k)
	{	j = 0;
	while (j < k)
	{
	if (format[i] == p[j])
	{
	switch (j)
	{ case 0:
		printf("%c", va_arg(prnt, int));
		break;
		case 1:
		printf("%f", va_arg(prnt, double));
		break;
		case 2:
		printf("%d", va_arg(prnt, int));
		break;
		case 3:
		str = va_arg(prnt, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		break;
		default:
		continue;
	}
	}
		if (i != (k - 1) &&  format[i] == p[j])
		printf(", ");
		j++; }
	i++;
	}
	va_end(prnt);
	printf("\n");
}
