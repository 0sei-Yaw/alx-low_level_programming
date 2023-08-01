#include "lists.h"

/**
 * listint_len - the number of elements in a linked lists are returned
 * @h: linked list of type listint_t to traverse
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

