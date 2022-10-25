#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees all the memory allocated to a linked list
 *@head: address of the first element in the list.
 *
 *the idea is to transverse through the list free each node, and setting
 *the head to the next node.
 */

void free_listint(listint_t *head)
{
	while (head)
	{
	free(head);
	head = (*head).next;
	}

}
