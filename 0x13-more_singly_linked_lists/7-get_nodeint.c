#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at specified index in a lnkd list
 * @head: Pointer to the first node in the linked list
 * @index: Index of the desired node
 *
 * This function traverses the linked list starting from the @head and
 * retrieves the node at the given @index. If the index is out of bounds
 * or the list is empty, it returns NULL.
 *
 * Return: Pointer to the node at the specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
