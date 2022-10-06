#include <stdlib.h>
/**
 * array_range - creates an array of integers, which begin from a
 * certain number and ends at another number.
 * @min: the minimum number in the array.
 * @max: the maximum number in the array.
 *
 * Return: a pointer to the allocated memory.
 */
int *array_range(int min, int max)
{
int i, c;
int *k;

if (min > max)
	return (NULL);
c = max - min;
	k = malloc(sizeof(int) * (c + 1));
if (k == NULL)
	return (NULL);

for (i = 0; i <= c; i++)
	k[i] = min + i;
return (k);
}

