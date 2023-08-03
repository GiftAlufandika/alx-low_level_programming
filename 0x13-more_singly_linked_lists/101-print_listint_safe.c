#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to head of a list.
 *
 * Return: Length of list (INT)
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr, *cu;
	size_t k, j;

	curr = head;
	k = 0;

	while (curr != NULL)
	{
		cu = head;
		for (j = 0; j < k; j++)
		{
			if (cu == curr)
			{
				printf("-> [%p] %d\n", (void *)curr, curr->n);
				return (k);
			}

			cu = cu->next;
		}
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
		k++;
	}

	return (k);
}
