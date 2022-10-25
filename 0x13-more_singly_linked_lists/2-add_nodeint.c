#include "lists.h"
#include <stdlib.h>
/**
 *add_nodeint - adds a node to the beginning of a linked list
 *@head: a pointer to the address of the head, has to be the address
 *of the head and not just the head, cos the head was initially
 *pointing to NULL, so there's no way we could have passed it.
 *@n: the new element to be added to the list.
 *Return: pointer to the address of the new node in the list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	k = malloc(sizeof(listint_t));
	if (k == NULL)
	{
		free(k);
		return (NULL);
	}

	(*k).n = n;
	(*k).next = (*head);
	(*head) = k;
	return (*head);
}
