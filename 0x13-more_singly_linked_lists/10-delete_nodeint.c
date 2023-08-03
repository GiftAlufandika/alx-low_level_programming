#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of a
 * listint_t linked list.
 *
 * @hed: poiter of pointer to a head of a list.
 * @index: position of node to delete.
 *
 * Return: 1 (success) else -1 on fail.
 */
int delete_nodeint_at_index(listint_t **hed, unsigned int index)
{
	unsigned int j;
	listint_t *node, *previous;

	if (!(*hed))
		return (-1);
	j = 0;
	previous = NULL;
	node = *hed;

	if (!index)
	{
		(*hed) = (*hed)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (j == index)
		{
			previous->next = node->next;
			free(node);
			return (1);
		}
		previous = node;
		node = node->next;
		j++;
	}

	return (-1);
}


