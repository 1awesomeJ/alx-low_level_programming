#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *@head: address of the first node of the list
 *@index: the required node to be returned.
 * Return: Always 0.
 */




listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
	return (NULL);

for (i = 0; i < index; i++)
	head = (*head).next;

if (head == NULL)
	return (NULL);

return (head);

}
