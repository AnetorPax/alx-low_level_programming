#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t linked list.
 * @head: pointer to the head pointer
 * @index: the index of the node starting at 0
 * Return: nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *headcp = head;

	for (c = 0; (c < index) && headcp; c++)
		headcp = headcp->next;
	return (headcp);
}
