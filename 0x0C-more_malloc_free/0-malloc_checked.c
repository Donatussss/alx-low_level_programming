#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory using malloc
* @b: size of memory to be allocated by malloc
* Return: a pointer to allocated memory on success
* 98 if insufficient memory
*/

void *malloc_checked(unsigned int b)
{
	char *temp;

	temp = malloc(b);
	if (temp == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (temp);
}
