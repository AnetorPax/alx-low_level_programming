#include "lists.h"
/**
 * add_nodeint_end - adds a new node to the end of listint_t list
 * @head: pointer to the head node
 * @n: data to be stored in the new node
 * Return: address of the new node or Null if fialure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	/* memory allocation to new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/* initialize new Node to the data provided */
	newNode->n = n;

	/* Making new node the last node in the list */
	newNode->next = NULL;

	/* loop to make head points to new node */
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
