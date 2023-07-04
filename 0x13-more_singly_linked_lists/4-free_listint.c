#include "lists.h"
/**
 * free_listint - free the list
 * @head: pointer to first element
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
