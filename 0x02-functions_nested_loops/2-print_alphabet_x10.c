#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description - prints alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int c = 97;
	int num = 0;

	while (num < 10)
	{
		c = 97;
		while (c < 123)
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		num++;

	}
}
