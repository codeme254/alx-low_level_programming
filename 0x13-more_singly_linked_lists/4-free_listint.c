#include "lists.h"

/**
  *free_listint - frees a listint_t list.
  *@head : the first element of the list
  */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
