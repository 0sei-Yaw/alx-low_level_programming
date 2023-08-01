#include "lists.h"

/**
 * add_nodeint - a new node is added at the beginning of a linked list
 * @head: the first node in the lists pointer
 * @n: new node data to be inserted
 *
 * Return: new node pointer, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
