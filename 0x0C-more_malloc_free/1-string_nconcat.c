#include <stdlib.h>

int _strlen(char s[]);

/**
 * string_nconcat - adds the first n bytes of a second string,to a first string
 *@s1: the first string
 *@s2: the second string
 *@n: the number of bytes to be copied from s2
 * Return: a pointer to the address of the concantenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, c, i, j;
	char *b;
/* first, we should get the length of s1 to know how much space to allocate*/

	if (s1 == NULL)
		a = 0;
	if (s2 == NULL)
		c = 0;
	if (s1 != NULL)
	a = _strlen(s1);
	if (s2 != NULL)
	c = _strlen(s2);
	if (n < c)
	{
	b = malloc(a + n + 1);
	if (b == NULL)
		return (NULL);
	}
	if (n >= c)
	{
	b = malloc(a + c + 1);
	if (b == NULL)
		return (NULL);
	}
/*now we copy s1 first into the allocted space, s1 will occupy index 0 to a-1*/

	for (i = 0; i < a; i++)
		b[i] = s1[i];

/*Finally we copy the first n bytes of s2 to the rem space, i=0 4 s2 from 0*/

	i = 0;
	for (j = a; j < (a + n); j++)
	{
		b[j] = s2[i];
		i++;
	}

	return (b);
}

/**
 *_strlen - returns the length of a string
 *@s: the string to be checked
 * Return: Always 0.
 */
int _strlen(char s[])
{
	int k = 0;
	int n;

	for (n = 0; s[n] != '\0'; n++)
		k++;
	return (k);
}
