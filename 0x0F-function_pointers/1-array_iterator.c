#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - calls functions on the elements of an array
 *@array: the array whose elements are to be operated on
 *@size: size of the array
 *@action: pointer to the functions to be called on the array elements
 */



void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

if (array != NULL && action != NULL)
{
	for (i = 0; i < size; i++)
		action(array[i]);
}
}
