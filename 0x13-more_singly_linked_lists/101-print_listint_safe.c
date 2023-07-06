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
	const listint_t *next = NULL;
	const listint_t **visited = NULL; /* Hash table for visited nodes */
	size_t i;

	visited = malloc(sizeof(const listint_t *) * count);
	if (visited == NULL)
	{
		printf("Error: Memory allocation failed\n");
		exit(1);
	}

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* Check if current node is in the hash table */
		for (i = 0; i < count - 1; i++)
		{
			if (visited[i] == current)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				printf("-> Loop detected, exiting...\n");
				free(visited);
				exit(98);
			}
		}

		visited = realloc(visited, sizeof(const listint_t *) * count);
		if (visited == NULL)
		{
			printf("Error: Memory allocation failed\n");
			exit(1);
		}

		visited[count - 1] = current; /* Add current node to the hash table */

		next = current->next;
		current = next;
	}

	free(visited);
	return count;
}
