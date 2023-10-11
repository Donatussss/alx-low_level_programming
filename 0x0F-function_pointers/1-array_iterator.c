#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 * @array: array of elements provided
 * @size: size of array
 * @action: function provided as parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL && array != NULL)
	{
		while (i < size)
		{
			(*action)(*(array + i++));
		}
	}
}
