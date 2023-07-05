#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of a listint_t list
 * @head: double pointer to the head node
 * @index: the index of the node that should be deleted starting from 0
 * Return: 1 if successfule other -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	prev  = NULL;
	count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		count++;
	}
	return (-1);
}
