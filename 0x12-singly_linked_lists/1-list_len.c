#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: The head of the list.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
