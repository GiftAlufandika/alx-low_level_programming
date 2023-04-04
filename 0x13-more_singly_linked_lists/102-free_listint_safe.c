#include "lists.h"

/**
 * free_listint_safe - frees a list (safe version)
 * @h: linked list of type listint_t
 *
 * Return: number of nodes in freed list
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr, *cu, *head;
	size_t headf, ru;

	if (h == NULL || *h == NULL)
		return (0);

	curr = *h;
	head = *h;
i	headf = 0;

	while (head != NULL)
	{
		cu = *h;
		for (ru = 0; ru < headf; ru++)
		{
			if (cu == curr)
			{
				*h = NULL;
				return (headf);
			}
			cu = cu->next;
		}
		curr = head->next;
		free(head);
		head = curr;
		headf++;
	}
	*h = NULL;
	return (headf);
}
