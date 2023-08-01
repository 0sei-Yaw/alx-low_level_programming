#include "lists.h"

/**
 * sum_listint - the sum of all the data in a listint_t list is calculated
 * @head: the linked list first node
 *
 * Return: the sum results
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
