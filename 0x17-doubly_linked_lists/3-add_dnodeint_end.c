#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(struct dlistint_s));

	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	new_node->next = NULL;
	new_node->prev = last;
	last->next = new_node;

	return (new_node);
}
