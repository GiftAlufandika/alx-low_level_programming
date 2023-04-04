#include "lists.h"

/**
 * listint_len - returns the lenth of a list;
 * @h: pointer to the head of a list.
 *
 * Return: Length (INT) of a list.
 */

size_t listint_len(const listint_t *h)
{
    size_t n_nodes = 0;

    if (!h)
        return (0);

    for (; h != NULL; h = h->next)
    {
        n_nodes++;
    }
    return (n_nodes);
}
