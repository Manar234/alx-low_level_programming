#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer for first element
 * @index: int
 * Return: results
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *pnode;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (i == index)
		{
			pnode->next = node->next;
			free(node);
			return (1);
		}
	i++;
		pnode = node;
	node = node->next;
	}
return (-1);
}
