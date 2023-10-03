#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers
 * Each element of the grid should be initialized to 0
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional array of integers
 * Return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int **arr1;
	void *temp1, *temp2;

	if (width <= 0 || height <= 0)
		return (NULL);

	temp1 = malloc(sizeof(int *) * width);

	if (temp1 == NULL)
		return (NULL);

	arr1 = (int **)temp1;

	while (i < width)
	{
		temp2 = calloc(height, sizeof(int));

		if (temp2 == NULL)
			return (NULL);

		*(arr1 + i) = (int *)temp2;

		i++;
	}

	return (arr1);
}
