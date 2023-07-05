#include "lists.h"
/**
 * sum_listint - Sums all the data of a linked list
 * @head: pointer to the head node
 * Return: sum of data of list other NULL if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
