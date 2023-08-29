#include "lists.h"

/**
 *free_listint_safe -this is responsible for freeing a linked list
 * This function traverses the linked list and frees each node.
 * It also checks for a NULL pointer and returns an error if one is found.
 * @h: Pointer to the first node in the linked list.
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
