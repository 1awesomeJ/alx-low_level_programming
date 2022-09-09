#include <stdio.h>
/**
 * main - Entry point
 * Description: This ccode displays all the possible
 * combinations of three digits without repetition
 * keeping just the smallest combinations with
 * just 8 uses of only the putchar() output function
 * Return: Always 0 (Success)
 */



int main(void)
{
	int k;
	int t;
	int g;

	for (k = 0; k < 10; k++)
	{
		for (t = 0; t < 10; t++)
		{
		if (k >= t)
		{
		continue;
		}
		for (g = 0; g < 10; g++)
		{
		if (t >= g)
		{
			continue;
		}
		putchar(k + '0');
		putchar(t + '0');
		putchar(g + '0');
		if (k != 7)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	}
	putchar('\n');
	return (0);
}
