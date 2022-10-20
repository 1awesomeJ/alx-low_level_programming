#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the beginning of a linked list
 *@head: pointer to the start of the list
 *@str: the string element at the newly inserted node
 * Return: pointer to the nelwy inserted node.
 */


list_t *add_node(list_t **head, const char *str)

{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = (*head);
	(*head) = new;

	return (new);
}
