#include"lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: type listint_t pointer
 * Rerurn: pointer to lostint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
