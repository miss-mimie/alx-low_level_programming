#include "lists.h"

/**
 * pop_listint - pops the the head node and returns it's data
 * @head: pointer to the head node
 *
 * Return: the data stored in the popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0); /* returns an empty list */

	/* this adjust links to remove node */
	tmp = *head;
	*head = (*head)->next;

	/* saves the data in the node to be popped */
	data = tmp->n;

	/* this free memory allocated for the deleted node */
	free(tmp);
	tmp = NULL;

	return (data);
}
