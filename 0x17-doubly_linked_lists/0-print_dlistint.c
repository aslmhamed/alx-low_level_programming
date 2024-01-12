#include "lists.h"
/**
 * print_dlistint - prints all elements of the node
 * @h: head of the list.
 *
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
  size_t i;
  
  for (i = 0; h; i++)
  {
      printf("%d\n", h->n);
      h = h->next;
  }
    
}

