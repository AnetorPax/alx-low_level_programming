#include "lists.h"
/**
 * get_nodeint_at_index - Checks the nth node of the list
 * @head: pointer to the head head
 * @index: node index starting from 0
 * Return: the nth node otherwise NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}

	return (NULL);
}
