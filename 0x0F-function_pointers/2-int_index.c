#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array to be searched
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return:  the index of the first element for which the cmp
 * function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if ((*cmp)(*(array + i++)) != 0)
				return (i - 1);
		}
	}

	return (-1);
}
