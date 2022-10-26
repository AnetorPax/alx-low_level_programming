#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to the head
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int value;

	listint_t *headcp = *head, *next;
	if (headcp == NULL)
		return (0);
	else
	{
		value = headcp->n;
		next = headcp->next;
		free(headcp);
		*head = next;
	}
	headcp = NULL;
	return (value);
}
