#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - frees memory allocated to a linked list.
 *@head: pointer to the start of the list.
 *
 */


void free_list(list_t *head)
{
	list_t *k;

	while (head)
{
	k = head;
	head = (*head).next;

	free((*k).str);
	free(k);
	k = NULL;
}
}
