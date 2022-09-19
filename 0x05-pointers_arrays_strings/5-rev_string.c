#include "main.h"
/**
 * rev_string - reverses the characters in a string array
 *
 * @s: the string array whose characters are to be reversed
 */


void rev_string(char *s)
{
	char t[100];
	int k;
	int p;
	int q;
	int n = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		n++;
	}

	p = n - 1;
	q = 0;
	while (p >= 0  &&  q < n)
	{
		t[q] = s[p];
			q++;
			p--;
	}
	for (p = 0; p < n; p++)
	{
		s[p] = t[p];
	}

}
