#include "lists.h"
/**
 * print_listint - Prints all elements of a listint_t linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return count;
}

int main(void)
{
	listint_t node1 = {1, NULL};
	listint_t node2 = {2, NULL};
	listint_t node3 = {3, NULL};

	node1.next = &node2;
	node2.next = &node3;

	size_t node_count = print_listint(&node1);
	printf("Number of nodes: %lu\n", node_count);

	return (0);
}

