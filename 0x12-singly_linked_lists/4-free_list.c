#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *release;

	while (head != NULL)
	{
	release = head;
	head = head->next;

	if (release->str != NULL)
	free(release->str);

	free(release);
	}
}
