#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a linked list.
 *@h: the head pointer of the list.
 *
 * Return: number of nodes in the list.
 */

size_t print_list(const list_t *h)

{
	size_t k;

	k = 0;

	while (h != NULL)
	{
	if ((*h).str == NULL)
		printf("[0] (nil)\n");
	if ((*h).str != NULL)
	printf("[%d] %s\n", (*h).len, (*h).str);
	k++;
	h = (*h).next;
	}
	return (k);

}


