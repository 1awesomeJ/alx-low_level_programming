#include <stdio.h>

/**
 * main - Entry point
 * Description: this code prints all the 16
 * digits of the hexadcimal base
 * Return: Always 0 (Success)
 */


int main(void)
{
	int a = 0;
	char k = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (k < 'g')
	{
		putchar (k);
		k++;
	}
	putchar('\n');
	return (0);
}
