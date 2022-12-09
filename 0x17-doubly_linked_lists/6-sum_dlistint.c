#include <stddef.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of the lements of a doubly-linked list
 *@head: the head pointer of the list.
 * Return: Always EXIT_SUCCESS.
 */



int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);
while (head)
	{
	sum += head->n;
	head = head->next;
	}
return (sum);
}
