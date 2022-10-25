#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - counts the number of elements in a linked list
 *@h: a pointer to the first element in the list
 * Return: numeber of elements in the list.
 */



size_t listint_len(const listint_t *h)

{
	size_t k = 0;

while (h)
{
	k++;
	h = (*h).next;
}

return (k);

}
