#ifndef LIST_H
#define LIST_H

#include <stddef.h>

typedef struct listint_s listint_t;
listint_t *add_nodeint(listint_t **head, const int n);

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);




/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
struct listint_s
{
	int n;
	struct listint_s *next;
};
#endif
