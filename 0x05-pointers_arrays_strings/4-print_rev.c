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
