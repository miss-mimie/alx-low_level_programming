#include "lists.h"

/**
 * free_listint_safe - this safely deallocates memory for a linked list and checks
 * for a loop
 * @head:  pointer to the start of the list
 *
 * Return: number of nodes in the free'd list
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *tmp;
	ssize_t offset;
	size_t node_count = 0;

	if (head == NULL || *head == NULL)
	{
		return (0); /* the list is empty */
	}

	while (*head != NULL)
	{
		offset = *head - (*head)->next;

		/* free nodes before the loop is encountered */
		if (offset > 0)
		{
			tmp = (*head);
			(*head) = (*head)->next;
			free(tmp);
			tmp = NULL;
			node_count++;
		}
		else
		{
			/*  loop was found, clean up and leave */
			free(*head);
			*head = NULL;
			node_count++;
			break;
		}
	}

	*head = NULL;
	return (node_count);
}
