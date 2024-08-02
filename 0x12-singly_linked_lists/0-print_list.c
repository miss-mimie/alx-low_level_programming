#include "lists.h"

/**
 * print_list - This prints all elements of list_t.
 * @head: this is the head node
 *
 * Return: the number of nodes
 */
size_t print_list(const lsit_t *head)
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
		head = head->nest;
	}

	return (node_count);
}
