#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints the elements in a linked list
 *@h: pointer to the head of the list
 * Return: number of elements in the list
 */





size_t print_listint(const listint_t *h)
{
	size_t k = 0;

while (h)
{
	printf("%d\n", (*h).n);
	k++;
	h = (*h).next;
}

return (k);

}
