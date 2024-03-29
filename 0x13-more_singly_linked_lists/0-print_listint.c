#include "lists.h"
/**
 * print_listint - prints all elements of the listint_t list
 * @h: pointer to the head node of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}

	return (count);
}
