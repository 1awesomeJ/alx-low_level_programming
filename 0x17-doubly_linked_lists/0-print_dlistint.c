#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint list
 *@h: head pointer of the list.
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;

	while (h)
	{
	printf("%d\n", h->n);
	k++;
	h = h->next;
	}
	return (k);
}
