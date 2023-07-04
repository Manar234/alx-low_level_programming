#include "lists.h"
/**
 * free_listint - free the list
 * @head: pointer to first element
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
