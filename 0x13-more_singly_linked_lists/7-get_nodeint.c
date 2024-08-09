#include "lists.h"

/**
 * get_nodeint_at_index - this returns the nth node of a linked list of integers
 * @head: head node
 * @index: index of the node (starts at 0)
 *
 * Return: address of the nth node if found, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL); /* the list is empty */

	while (head != NULL)
	{
		if (i == index)
		{
			return (head); /*returns found node's address */
		}

		/* node not found, keep searching */
		head = head->next;
		i++;
	}

	return (NULL); /* this node does not exist */
}
