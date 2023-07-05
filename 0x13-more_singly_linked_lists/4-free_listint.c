#include "lists.h"
/**
 * free_listint - frees listint_t list
 * @head: pointer to the head node
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	/* loop to free memory allocated to temp */
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
