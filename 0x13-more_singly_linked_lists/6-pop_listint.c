#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 *@head: address of the pointer to the first node in the list.
 *
 * Return: the head node's data.
 */



int pop_listint(listint_t **head)
{
listint_t *k;
int r;

if (*head == NULL)
	return (0);

k = (*head);
r = (*k).n;
(*head) = (**head).next;
free(k);

return (r);

}




