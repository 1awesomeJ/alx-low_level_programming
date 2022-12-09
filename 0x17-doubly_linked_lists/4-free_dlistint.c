#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a linked list
 *@head: head pointer of the list.
 * Return: Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

