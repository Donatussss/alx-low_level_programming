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
	int i = 0, j = 0;
	int **arr1 = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr1 = malloc(sizeof(int *) * height);

	if (arr1 == NULL)
	{
		free(arr1);
		return (NULL);
	}

	while (i < height)
	{
		j = 0;
		*(arr1 + i) = malloc(sizeof(int) * width);

		if (*(arr1 + i) == NULL)
		{
			while (i >= 0)
			{
				free(*(arr1 + i));
				i--;
			}

			free(arr1);
			return (NULL);
		}

		while (j < width)
		{
			*(*(arr1 + i) + j) = 0;
			j++;
		}
		i++;
	}

	return (arr1);
}
