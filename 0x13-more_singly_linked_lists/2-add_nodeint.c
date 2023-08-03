#include "lists.h"

static listint_t *nw_node(const int n);

/**
 * add_nodeint - add a node at the head of a list.
 * @hd : pointer of a pointer to a list.
 * @n : value to set the new list to.
 *
 * Return: pointer to a pointer of listint_t
 */
listint_t *add_nodeint(listint_t **hd, const int n)
{
	listint_t *nw;

	if (!(*hd))
	{
		*hd = nw_node(n);
		return (*hd);
	}

	nw = nw_node(n);
	nw->next = *hd;
	*hd = nw;
	return (*hd);
}

/**
 * nw_node - creates a nw listint_t node.
 * @n: number to place inside the node.
 *
 * Return: pointer to the nw node.
 */
static listint_t *nw_node(const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	return (nw);
}
