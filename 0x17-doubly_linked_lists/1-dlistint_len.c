#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - returns the number of the elements of a dlistint list
 *@h: head pointer of the list.
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t k = 0;

	while (h)
	{
	k++;
	h = h->next;
	}
	return (k);
}
