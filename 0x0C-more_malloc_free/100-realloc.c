#include "main.h"
#include <stdlib.h>

/**
* _memcpy - copies memory
* @dest: destination
* @src: source
* @n: size of mem
* Return: copied mem
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
* _realloc - a function that reallocates a memory block using malloc and
* free
* @ptr:  pointer to the memory previously allocated with a call to malloc
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes of the new memory block
* Return: ptr or NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		temp = malloc(new_size);
		if (temp == NULL)
			return (NULL);
		free(ptr);
		return (temp);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	temp = malloc(new_size);

	if (temp == NULL)
		return (NULL);

	_memcpy(temp, ptr, old_size);
	free(ptr);

	return (temp);
}
