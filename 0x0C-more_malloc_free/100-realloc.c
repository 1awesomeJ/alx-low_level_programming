#include<stdlib.h>
/**
 * _realloc -reallocates a memory block using malloc and free
 * @ptr: pointer to the address of the old block
 * @old_size: size of old memory block
 * @new_size: size of the realloated memory block
 *
 * Return: pointer to the new address on success.
 */




void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *k, *c;
	void *p;
unsigned int i;

	c = (char *) ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		k = malloc(new_size);
		p = k;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	k = malloc(new_size);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		k[i] = c[i];
	free(ptr);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		k[i] = c[i];
	free(ptr);
	}

	p = k;

	return (p);
}
