#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list
 * @head: Pointer to a pointer to the first element in the linked list
 *
 * Return: The data inside the element that was removed,
 * or 0 suppose the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
