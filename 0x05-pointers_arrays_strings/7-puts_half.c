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
 * puts_half - prints half of a string,
 * followed by a new line
 * @str: pointer to first char in string
 * Return: no return data
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int cond = len % 2 != 0 ? 1 : 0;
	int n = (len - cond) / 2;
	int count = 0;

	while (count < len)
	{
		if (count >= n - cond)
		{
			_putchar(*(str + count));
		}

		count++;
	}

	_putchar('\n');
}
