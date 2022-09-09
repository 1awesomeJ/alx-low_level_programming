#include <stdio.h>
/**
 * main - Entry point
 * Description: this code prints the 9 digits of
 * base 10, separating them with commas and white space
 * with on 3 uses of just the putchar() function
 * Return: Always 0 (Success)
 */





int main(void)
{

int k = 0;
	while (k < 10)
	{
	putchar(k + '0');
	if (k != 9)
	{
	putchar(',');
	putchar(' ');
	}
	k++;
	}
	putchar('\n');
	return (0);
}
