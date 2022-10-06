#include <stdlib.h>
/**
 * malloc_checked - allocates a specified byte size of memory
 * in heap, and exits with a specified status value if the allocation fails
 *@b: the size of memory to be allocated.
 * Return: a void pointer to the address of the allocated memory.
 */



void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (k);
}
