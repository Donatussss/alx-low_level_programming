#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: address of first character
 * Return: no return data
 */

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len > -1)
	{
		_putchar(*(s + len));
		len--;
	}

	_putchar('\n');

}
