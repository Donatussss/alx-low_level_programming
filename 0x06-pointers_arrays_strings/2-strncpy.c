#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (j < n)
	{
		if (*(src + j) == 0)
		{
			while (j < n)
			{
				*(dest + i) = '\0';
				i++;
				j++;
			}
			break;
		}
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
