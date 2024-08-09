#include "lists.h"

/**
 * sum_listint - this returns the sum of all the integer values of linked list
 * @head:  head node
 *
 * Return: sum of all the integer values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0); /* returns an empty list */

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
