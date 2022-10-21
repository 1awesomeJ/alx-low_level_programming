#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node to the end of a linked list
 *@head: pointer to the start of the list
 *@str: the string element at the newly inserted node
 * Return: pointer to the nelwy inserted node.
 */


list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new;
	list_t *k;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	k = *head;

	while ((*k).next != NULL)
	{
		k = (*k).next;
	}
	(*k).next = new;

	return (new);
}
