#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: points to memory area i.e a pointer
 * @b: the constant byte
 * @n: number of bytes to be filled by b
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
