#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to the head pointer
 * Return: Head nodes data or 0 if listint_t = NULL
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	/* to store the head node in a temporary pointer */
	temp = *head;

	/* to obtain the data in the head node */
	data = temp->n;

	/* making the next node the new head node */
	*head = (*head)->next;

	/* free the memory from the previous head node */
	free(temp);

	return (data);
}
