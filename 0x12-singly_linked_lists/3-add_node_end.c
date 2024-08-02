#include "lists.h"

/**
 * add_node_end - This adds a new node at the end of a list_t 
 * @head: the head node
 * @str: string 
 *
 * Return: the address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tail;
	char *dup_str;

	tail = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = strlen(dup_str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}

	return (*head);
}
