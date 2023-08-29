#include "lists.h"

/**
 * custom_print_list - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Returns the number of nodes in the linked list
 */
size_t custom_print_list(const listint_t *h)
{
    size_t count = 0;

    while (h)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }

    return (count);
}
