#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to the start of a linked list
 *@n: the element to be contained at the node.
 *@head: pointer to the head pointer of the list
 * Return: Always EXIT_SUCCESS.
 */




dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	new->prev = NULL;
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
