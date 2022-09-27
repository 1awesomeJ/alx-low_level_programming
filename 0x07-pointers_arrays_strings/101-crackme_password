/**
 * main - generates random passwords
 *
 * Return: Always 0.
 */


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i = 0;
	int r = 0;
	int N;
char digits[] = "0123456789";
char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char lower[] = "abcdefghijklmnopqrstuvwxyz";
char symbols[] = "@#$%^&*?";
char passwd[10];

srand((unsigned int)(time(NULL)));
r = rand() % 4;

N = 10;

for (i = 0; i < N; i++)
{
	if (r == 1)
	{
	passwd[i] = digits[rand() % 10];
		r = rand() % 4;
		printf("%c", passwd[i]);
	}
	else if (r == 2)
	{
	passwd[i] = upper[rand() % 26];
		r = rand() % 4;
	printf("%c", passwd[i]);
	}
	else if (r == 3)
	{
	passwd[i] = lower[rand() % 26];
		r = rand() % 4;
	printf("%c", passwd[i]);
	}
	else
	{
	passwd[i] = symbols[rand() % 8];
		r = rand() % 4;
	printf("%c", passwd[i]);
	}
	}
	return (0);
}
