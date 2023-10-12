#include "lists.h"

/**
  * free_dlistint - empty doubly linked list.
  * @head: the first node.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor;

	if (head == NULL)
		return;
	cursor = head;
	while (cursor->next->next != NULL)
		cursor = cursor->next;
	while (cursor != NULL)
	{
		free(cursor->next);
		cursor = cursor->prev;
	}
	free(head);
}
