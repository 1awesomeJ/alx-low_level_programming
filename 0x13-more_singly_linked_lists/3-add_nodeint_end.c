#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint_end - adds a node to the end of a linked list
 *@head: a pointer to the address of the head, has to be the address
 *of the head and not just the head, cos the head was initially
 *pointing to NULL, so there's no way we could have passed it.
 *@n: the new element to be added to the list.
 *Return: pointer to the address of the new node in the list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *k, *p;

	k = malloc(sizeof(listint_t));
	if (k == NULL)
	{
		free(k);
		return (NULL);
	}

	(*k).n = n;
	(*k).next = NULL;

	if (*head == NULL)
	{
	(*head) = k;
	return (*head);
	}
/*
 *a new pointer p of type listint_t is needed to transverse from the
 *head to the current last item in the list, so that its next can point
 * to the new element being added
 */
	p = (*head);

		while ((*p).next)
		p = (*p).next;

		(*p).next = k;
		(*k).next = NULL;

	return (k);
}
