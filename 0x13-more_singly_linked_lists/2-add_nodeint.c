#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: pointer to the head node
 * @n: value to be stored in the new node
 * Return: NULL if fialure otherwise the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	/* Allocating memory to the new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/* initializing the new node with the data provided */
	newNode->n = n;

	/* to make new node point to the current head */
	newNode->next = *head;

	/* updating head node to new node */
	*head = newNode;

	return (newNode);
}
