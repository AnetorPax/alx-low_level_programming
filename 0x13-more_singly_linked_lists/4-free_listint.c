#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointing to the head
 */

void free_listint(listint_t *head)
{
	listint_t *headcp = head, *next;

	while (headcp != NULL)
	{
		next = headcp->next;
		free(headcp);
		headcp = next;
	}
	head = NULL;
}
