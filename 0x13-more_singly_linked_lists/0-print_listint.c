#include "lists.h"

/**
 * custom_print_list - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 *
 * Returns the number of nodes in the linked list
 */
size_t custom_print_list(const listint_t *head)
{
    size_t count = 0;

    while (head)
    {
        printf("%d\n", head->n);
        count++;
        head = head->next;
    }

    return count;
}
