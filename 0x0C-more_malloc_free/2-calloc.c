#include "main.h"
#include <stdlib.h>

/**
* _calloc - a function that allocates memory for an array, using malloc
* @nmemb: number of array elements
* @size: size of a single element of array
* Return: pointer to the allocated memory or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	temp = malloc(size * nmemb);

	if (temp == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		temp[i] = 0;

	return ((void *)temp);
}
