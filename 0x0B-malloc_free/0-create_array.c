#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of char array
 * @c: char to initialize array with
 * Return: NULL if size = 0. A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	void *char_arr = malloc((sizeof(c) * size) + 1);
	char *temp;
	unsigned int i = 0;

	if (size == 0 || char_arr == NULL)
	{
		return (NULL);
	}

	temp = (char *)char_arr;

	while (i < size)
	{
		*(temp + i++) = c;
	}

	return (temp);
}
