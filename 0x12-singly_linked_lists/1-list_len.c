#include <stdlib.h>
#include "lists.h"

/**
 * list_len - will return the number of elements in that exist in a linked list
 * @h: the pointer to the list_t list
 *
 * Return: will return the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
