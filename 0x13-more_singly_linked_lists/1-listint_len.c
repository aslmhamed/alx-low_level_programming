#include "lists.h"

/**
 * listint_len - pirnts a linked list
 *
 * @h: pointer to first node
 *
 * Return: list size
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
