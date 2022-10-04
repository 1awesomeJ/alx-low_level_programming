#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: the string array whose length is to be determined
 * Return: length of the string.
 */
int _strlen(char *s);


/**
 * str_concat - concantenates two string and store the result in heap.
 * @s1: the  first string
 * @s2: the second string
 * Return: NULL on failure, or a pointer the the
 * concantenated strimgs's  location in memory
 */

char *str_concat(char *s1, char *s2)
{
int i, j, k, l;
char *set;

	k = _strlen(s1);
	j = _strlen(s2);
	set = (char *) malloc((k + j) * sizeof(char) + 1);
	if (set == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		if (s1 != NULL)
		set[i] = s1[i];
	}
	l = 0;
	for (i = k; i <= (k + j); i++)
	{
		if (s2 == NULL)
		set[i] = '\0';
		if (s2 != NULL)
		set[i] = s2[l];
	l++;
	}
	return (set);

}

/**
 * _strlen - gives the length of a string
 * @s: the string array whose length is to be determined
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int k = 0;
	int n;

	if (s == NULL)
		return (0);
	for (n = 0; s[n] != '\0'; n++)
		k++;
	return (k);
}

