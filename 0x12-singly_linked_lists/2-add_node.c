#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_note - adds a head at the beginning of a dlistint_t list
 * @head: a pointer to the head node
 * @n: the number to insert
 *
 * Return: the address of the new node
 */
list_t *add_note(list_t **head, const char *str);
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL); /* malloc failed */

	new_node->n = n;
	new_node->prev = NULL;

	/* handle insertion when the list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		(*head)->next = NULL;
	}
	else
	{
		/* handle insertion when the list is not empty */
		new_node->next = *head;
		(*head)->prev = new_node;
		if ((*head)->next != NULL)
			(*head)->prev = new_node;

		*head = new_node;
	}

	return (new_node);
}
