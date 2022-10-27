#include"lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: type listint_t list pointer
 * @index: index of the node to be deleted
 * Return: 1 if succeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *movehead = *head, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = movehead->next;
		free(movehead);
		return (1);
	}
	for (node = 0; node < index; node++)
	{
		if (movehead == NULL)
			return (-1);
		prev = movehead;
		movehead = movehead->next;
	}
	if (prev)
		prev->next = movehead->next;
	free(movehead);
	return (1);
}
