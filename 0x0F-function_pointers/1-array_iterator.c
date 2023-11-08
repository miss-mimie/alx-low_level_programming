#include "_function_pointers.h"
#include <stdio.h>

/**
 * print_elem - this prints the elements in an array of integers
 * @arrays - this is the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function that modifies the printing behaviour
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (action)(int))
{
	size_t i;

	/* handle cases where invalid arguements are passed */
	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
