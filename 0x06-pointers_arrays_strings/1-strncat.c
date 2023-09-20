#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string appended to dest
 * @n: no. of bytes to take from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (dest);
}
