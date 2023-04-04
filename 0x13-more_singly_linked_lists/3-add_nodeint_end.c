#include "lists.h"


static listint_t *nw_node(const int n);
/**
 * add_nodeint_end - add a node to the end of a list.
 * @hed: pointer of apointer to the head of a list.
 * @n: number value to set the new node to.
 *
 * Return: pointer to the head of a list.
 */
listint_t *add_nodeint_end(listint_t **hed, const int n)
{
	listint_t *new, *tmp;

	if (!(*hed))
	{
		*hed = nw_node(n);
		return (*hed);
	}

	tmp = *hed;
	while (tmp)
	{
		if (!tmp->next)
		{
			new = nw_node(n);
			tmp->next = new;
			break;
		}
		tmp = tmp->next;
	}
	return (*hed);
}

/**
 * nw_node - creates a new listint_t node.
 * @n: number to place inside the node.
 *
 * Return: pointer to the new node.
 */
static listint_t *nw_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}

