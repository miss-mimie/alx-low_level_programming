#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the head node
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		safe_free(current_node->str);
		safe_free(current_node);
	}
}

/**
 * _free - free dynamically allocated memory
 * @ptr: memory location pointer
 *
 * Description: The _free() function takes care of freeing
 * dynamically allocated memory while ensuring the pointer
 * @ptr passed to it is not NULL before trying to free it.
 */
void _free(void **ptr)
{
	if (ptr != NULL || *ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
} 
