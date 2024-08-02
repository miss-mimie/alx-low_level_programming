#include "lists.h"

/**
 * print_list - This prints all element of a list_t.
 * @head: the head node for this function.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *head)
{
	size_t node_count = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);
		node_count++;
		head = head->next;
	}

	return (node_count);
}
