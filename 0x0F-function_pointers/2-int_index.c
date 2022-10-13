#include <stdlib.h>

/**
 * int_index - returns the index at which a function calls turns true on array
 *@array: the array on the functions are called
 *@size: size of the array
 *@cmp: pointer to the function that's being called on the array
 * Return: index at which the call turns true
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}
	if (cmp(array[i]) == 0)
	return (-1);
}
	return (-1);

}
