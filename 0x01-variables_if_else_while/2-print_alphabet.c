#include <stdio.h>

/**
 * main - Entry point
 * Description: program to print all the letters of
 * ` the alphabet without using printf() or puts()
 * Return: Always 0 (Success)
 */

Int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
