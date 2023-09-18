#include "main.h"

/**
 * puts2 - prints every other character of a
 * string, starting with the first character,
 * followed by a new line
 * @str: pointer to first char in string
 * Return: no return data
 */

void puts2(char *str)
{
	int t = 0;

	while (*(str + t) != '\0')
	{
		if (t % 2 == 0)
		{
			_putchar(*(str + t));
		}

		t++;
	}

	_putchar('\n');
}
