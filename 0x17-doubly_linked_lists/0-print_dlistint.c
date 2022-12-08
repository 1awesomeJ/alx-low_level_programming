#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;
	while (h)
	{
	printf("%d\n", h->n);
	k++;
	h = h->next;
	}
	return k;
}
