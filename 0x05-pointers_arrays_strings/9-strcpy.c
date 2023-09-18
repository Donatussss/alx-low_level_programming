#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to
 * the buffer pointed to by dest.
 * @dest: destination buffer
 * @src: first address of char
 */

char *_strcpy(char *dest, char *src)
{
	int step = 0;

	while (*(src + step) != '\0')
	{
		*(dest + step) = *(src + step);
		step++;
	}

	*(dest + step) = '\0';

	return dest;
}
