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

/**
 * rev_string - prints a string, in reverse
 * @s: address of first character
 * Return: no return data
 */

void rev_string(char *s)
{
	int rise = 0;
	int len = _strlen(s) - 1;
	char temp = *s;
	int offset = len % 2 == 0 ? 0 : 1;

	if (len > 0)
	{
		while (len != rise - offset)
		{
			temp = *(s + len);
			*(s + len) = *(s + rise);
			*(s + rise) = temp;
			rise++;
			len--;
		}
	}
}
