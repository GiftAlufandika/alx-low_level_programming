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
    const listint_t *slow_p = head, *fast_p = head;
    size_t ele = 0;
    int is_loop = 0;

    for (; slow_p && fast_p && fast_p->next; slow_p = slow_p->next, fast_p = fast_p->next->next)
    {
        if (!(fast_p->next->next))
            break;
        if (slow_p == fast_p)
        {
            slow_p = slow_p->next;
            is_loop = 1;
            break;
        }
    }

    if (!is_loop)
    {
        for (; head; head = head->next, ele++)
        {
            printf("[%p] %d\n", (void *)head, head->n);
        }
        return (ele);
    }

    for (; head; head = head->next, ele++)
    {
        if (head == slow_p)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            printf("-> [%p] %d\n", (void *)head, head->next->n);
            exit(98);
        }
        printf("[%p] %d\n", (void *)head, head->n);
    }

    return (0);
}

