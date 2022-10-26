#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - inserts a node to the nth index of a linked list
 *@head: address of the first node of the list
 *@index: the index at which the node is to be deleted
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i, l;
listint_t *k, *m;

if (*head == NULL)
	return (-1);
m = *head;
while (m)
{
l++;
m = (*m).next;
}

if (index > l)
return (-1);

if (index == 0)
{
k = *head;
*head = (**head).next;
free(k);
k = NULL;
return (1);
}

k = *head;
for (i = 0; i < (index - 1); i++)
	k = (*k).next;
m = (*k).next;
(*k).next = (*m).next;
free(m);
m = NULL;
return (1);
}
