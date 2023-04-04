#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the int value in each element of a list.
 * @h: pointer to the head of a list.
 *
 * Return: Number of elements in a list.
 */

size_t print_listint(const listint_t *r)
{
    size_t nodes = 0;
    for (; r; r = r->next)
    {
        printf("%d\n", r->n);
        nodes++;
    }
    return (nodes);
}
