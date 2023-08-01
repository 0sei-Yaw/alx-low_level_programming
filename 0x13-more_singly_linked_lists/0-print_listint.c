#include "lists.h"

/**
 * print_listint - the elements of linked list are all printed
 * @h: linked list of type listint_t to be printed
 *
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

