#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements (nodes)
 */

size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
	Num_nodes++;
	h = h->next;
	}

	return (num_nodes);
}
