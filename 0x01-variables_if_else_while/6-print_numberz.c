#include <stdio.h>

/**
 * main - Entry point
 * Description: code to print the 10 single
 * digits using just putchar()
 * Return: Always 0 (Success)
 */

int main(void)

{
	int k = 0;

	while (k < 10)
	{
		putchar(k + '0');
		k++;
	}
	putchar('\n');
	return (0);
}
