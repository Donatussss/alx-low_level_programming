#include "main.h"

/**
 * print_alphabet - entry point
 * Description - print a to z followed by newline
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int c = 97;

	while (c < 97 + 26)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
