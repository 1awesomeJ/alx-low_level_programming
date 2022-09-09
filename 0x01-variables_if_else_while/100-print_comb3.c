#include <stdio.h>
/**
 * main - Entry point
 * Description: this code prints all the possible
 * combinations of two digits without repetition
 * separating them with commas and whitespaces
 * with 5 uses of just the putchar() function
 * Return: Always 0 (Success)
 */





int main(void)
{
	int a = -1;
	int b = -1;

	while (a < 10)
	{
		a++;
		b = -1;
	while (b < 9)
	{
		b++;
	if (a >= b)
	{
	continue;
	}
	putchar(a + '0');
	putchar(b + '0');
	if (a != 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
