#include "lists.h"

/**
 * pop_listint - delete the h node and return it's value.
 * @h: pointer of a pointer to a listint_t
 *
 * Return: value of the delete node (INT)
 */
int pop_listint(listint_t **h)
{
	int value;
	listint_t *new_h;

	if (!(*h) || !h)
		return (0);

	new_h = (*h)->next;
	value = (*h)->n;
	free(*h);
	*h = new_h;

	return (value);
}

