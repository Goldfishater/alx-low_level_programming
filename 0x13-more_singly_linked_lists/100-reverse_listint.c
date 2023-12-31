#include "lists.h"

/**
 * reverse_listint - the func that reverses a linked list
 * @head: this is the pointer to the first node in the list
 *
 * Return: retrns pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

