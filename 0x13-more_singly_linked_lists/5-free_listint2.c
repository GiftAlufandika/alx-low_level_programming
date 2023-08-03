#include "lists.h"

/**
 * free_listint2 - frees all the node in a list and reset the head to NULL.
 * @hed: pointer of pointer to a list.
 */
void free_listint2(listint_t **hed)
{
	listint_t *tmp;

	if (!hed)
		return;
	if (*hed)
	{
		tmp = *hed;
		*hed = NULL;
		free_listint(tmp);
		return;
	}
}
/**
 * free_listint - frees all the node in a list.
 * @hed: pointer to a list.
 */
void free_listint(listint_t *hed)
{
	if (!hed)
		return;
	free_listint(hed->next);
	free(hed);
}
