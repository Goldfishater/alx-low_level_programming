#include <stdio.h>
#include "lists.h"

/**
 * print_list - it does print all elements of a linked list
 * @h: the pointer to the list_t list that will be printed
 *
 * Return: returns the number of nodes that will have been printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
