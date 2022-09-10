#include <stdio.h>
/**
 * main - Entry point
 * Description: This ccode displays all the possible
 * combinations of two two-digit numbers without repetition
 * in order
 * keeping just the smallest combinations with
 * just 8 uses of only the putchar() output function
 * Return: Always 0 (Success)
 */



int main(void)
{
	int k;
	int t;

	for (k = 0; k < 100; k++)
	{
		for (t = 1; t < 100; t++)
		{
			if (k >= t)
		{
			continue;
		}

		putchar(k / 10 + '0');
		putchar(k % 10 + '0');
		putchar(' ');
		putchar(t / 10 + '0');
		putchar(t % 10 + '0');
		if (k != 98)
		{
		putchar (',');
		putchar(' ');
		}
		}
	}
		putchar('\n');
		return (0);
}
