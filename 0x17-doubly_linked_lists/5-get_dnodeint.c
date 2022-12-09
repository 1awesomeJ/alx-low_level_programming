#include <stddef.h>
#include "lists.h"


/**
 * get_dnodeint_at_index - gets the element at a given index of a linked list
 *@head: the head pointer of the list
 *@index: the required index
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;

	while (head)
	{
		head = head->next;
		i++;
		if (i == index + 1)
		break;
	}
	if (i < index + 2)
		return (NULL);

	return (head);
}

