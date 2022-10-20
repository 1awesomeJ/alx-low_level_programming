#include <stdio.h>
#include "lists.h"

/**
 *list_len - counts the number of elements in a linked list.
 *@h: the head pointer of the list.
 *
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)

{
	size_t k;

	k = 0;

	while (h != NULL)
	{
	k++;
	h = (*h).next;
	}
	return (k);

}


