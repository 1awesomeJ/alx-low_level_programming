#include <stdio.h>

/**
 * main - Entry point
 * DESCRIPTION: code to print all letters of the alphabet
 * first in lower case, then in UPPER CASE,
 * with just 3 uses of only the putchar() function
 * Return: Always 0 (Success)
 */

int main(void)

{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
	putchar(a);
	a++;
	}
	while (b <= 'Z')
	{
	putchar(b);
	b++;
	}
	putchar('\n');
	return (0);
}
