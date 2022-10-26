#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data in a linked list
 *@head: pointer to the first node in the list
 * Return: the sum, or 0 for an empty list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);

while (head)
{
	sum += (*head).n;
	head = (*head).next;
}

return (sum);

}
