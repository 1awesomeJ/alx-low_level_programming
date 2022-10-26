#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *@head: address of the first node of the list
 *@index: the required node to be returned.
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new, *k;

if (*head == NULL)
	return (NULL);
k = *head;
for (i = 0; i < (idx - 1); i++)
	k = (*k).next;

if (k == NULL)
	return (NULL);

new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);
(*new).next = (*k).next;
(*new).n = n;
(*k).next = new;
k = NULL;

return (new);

}
