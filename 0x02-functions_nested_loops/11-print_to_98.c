#include <stdio.h>
/**
 * print_to_98 - prints from any number to 98
 *@n: the number from which we're starting.
 * Return: Always 0.
 */


void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
		printf("%d", i);
		if (i != 98)
		{
		printf(", ");
		}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
		printf("%d", i);
		if (i != 98)
		{
		printf(", ");
		}
		}
		printf("\n");
	}
}
