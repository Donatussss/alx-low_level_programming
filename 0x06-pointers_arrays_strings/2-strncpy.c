#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (j < n)
	{
		if (*(src + j) == 0)
		{
			break;
		}

		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	while (j < n)
	{
		*(dest + i) = '\0';
		i++;
		j++;
	}

	return (dest);
}
