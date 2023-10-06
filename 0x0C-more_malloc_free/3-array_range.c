#include "main.h"
#include <stdlib.h>

/**
* array_range - a function that creates an array of integers
* @min: first and minimum value of the array to be created
* @max: last and maximum value of the array to be created
* Return: pointer to the newly created array or NULL
*/

int *array_range(int min, int max)
{
	int *temp;
	int num, i;

	if (min > max)
		return (NULL);

	i = (max - min) + 1;
	temp = malloc(sizeof(int) * i);

	if (temp == NULL)
		return (NULL);

	for (num = 0; num < i; num++)
		temp[num] = min + num;

	return (temp);
}
