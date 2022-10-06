#include <stdlib.h>
/**
 * _calloc - allocates meomory to an array and initializes the memory to zero
 * @nmemb: the number of elements int the array
 * @size: the size of each element in the array
 *
 * Return: Nothing.
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *k;
	void *p;

	if (nmemb < 1 || size < 1)
		return (NULL);
	k = malloc(size * nmemb);
	if (k == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		k[i] = 0;
	p = k;
	return (p);
}
