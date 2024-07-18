#include "main.h"
#include <string.h>

/**
 * alloc_grid - Returns a pointer to a 2D grid of integers
 * initialized with zero
 * @width: Width of grid
 * @height: Height of grid
 *
 * Return: A pointer to the 2D grid of integers, NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid, col;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (col = 0; col < height; col++)
	{
		/* allocate memory for rows */
	
