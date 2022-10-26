#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node to the nth index of a linked list
 *@head: address of the first node of the list
 *@idx: the at which the node is to be inserted
 *@n: data of the node to be inserted
 * Return: address of the inserted node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i, l;
listint_t *new, *k, *m;

if (*head == NULL)
	return (NULL);
m = *head;
while (m)
{
l++;
m = (*m).next;
}

if (idx > l)
return (NULL);

if (idx == 0)
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
