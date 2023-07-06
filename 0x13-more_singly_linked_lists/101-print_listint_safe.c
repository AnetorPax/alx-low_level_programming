#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *visited = NULL; /* Hash table for visited nodes */
	size_t i;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		visited = head;
		i = 0;
		while (i < count)
		{
			if (current == visited)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			visited = visited->next;
			i++;
		}
		if (!head)
			exit(98);
	}

	return (count);
}
