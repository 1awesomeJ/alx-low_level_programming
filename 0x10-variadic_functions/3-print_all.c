#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints any type of variable number of arguments.
 *
 *@format: format of the variables.
 */



void print_all(const char * const format, ...)
{	int i;
	char *str;
	va_list prnt;
	char *sep;

	va_start(prnt, format);
	i = 0;
	sep = "";
	while (format && format[i])
	{
	switch (format[i])
	{
		case 'c':
		printf("%s%c", sep, va_arg(prnt, int));
		break;
		case 'f':
		printf("%s%f", sep, va_arg(prnt, double));
		break;
		case 'i':
		printf("%s%d", sep, va_arg(prnt, int));
		break;
		case 's':
		str = va_arg(prnt, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s%s", sep, str);
		break;
	}
		sep = ", ";
		i++;
	}
	va_end(prnt);
	printf("\n");
}
