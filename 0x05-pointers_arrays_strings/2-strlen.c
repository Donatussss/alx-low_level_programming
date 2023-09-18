#include "main.h"

/**
 * _strlen - returns length of string
 * @s: pointer to first char in string
 * Return: int length of string
 */

int _strlen(char *s)
{
	int str_len = 0;
	char comp = *s;

	while (comp != '\0')
	{
		str_len++;
		comp = *(s + str_len);
	}

	return (str_len);
}
