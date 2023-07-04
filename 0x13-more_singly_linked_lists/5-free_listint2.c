#include "lists.h"
/**
 * free_listint2 - free the list
 * @head: pointer to first element
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (!head)
		return;
	ptr = *head;

	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}
