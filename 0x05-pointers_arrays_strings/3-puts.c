#include "main.h"

/**
 * _puts - prints a string, followed by a new
 * line, to stdout
 * @str: string to print
 * Return: no return data
 */

void _puts(char *str)
{
	int step = 0;

	while (*(str + step) != '\0')
	{
		_putchar(*(str + step));
		step++;
	}

	_putchar('\n');

}
