#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the  end of a doubly-linked list
 *@n: the element to be contained at the node.
 *@head: pointer to the head pointer of the list
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	new->prev = temp;
	temp->next = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
