#include <stdlib.h>
#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: the string array whose length is to be determined
 * Return: Always 0.
 */
int _strlen(char *s);


/**
 * _strdup - creates a duplicate of a string in the heap
 * @str: the string to be duplicate
 * Return: NULL on failure, or a pointer the the duplicate's location in memory
 */

char *_strdup(char *str)
{
int i, k;
char *set;
k = _strlen(str);
	if (str == NULL)
	return (NULL);

	set = (char *) malloc(k *sizeof(char) + 1);
	if (set == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		set[i] = str[i];
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

	for (n = 0; s[n] != '\0'; n++)
		k++;
	return (k);
}

