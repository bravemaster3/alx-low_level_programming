#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array
 * @width: the number of columns
 * @height: the numbe rof rows
 * Return: a double pointer to the array, or NULL on failure / negative input
 */
int **alloc_grid(int width, int height)
{
	int **arr_2D, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr_2D = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		arr_2D[i] = malloc(sizeof(int) * width);

	if (*arr_2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr_2D[i][j] = 0;
		}
	}

	return (arr_2D);
}
