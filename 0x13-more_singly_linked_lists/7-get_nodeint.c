#include "lists.h"

/**
 * get_nodeint_at_index -  the node is returned at a certain index in a linked list
 * @head: the linked list first node
 * @index: the node to return index
 *
 * Return: points to the node being looked for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
