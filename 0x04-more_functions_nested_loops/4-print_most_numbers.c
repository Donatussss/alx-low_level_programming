#include "main.h"
/**
 * print_numbers - entry point
 * Description - print 0 to 9
 * Return: no return data
 */

void print_most_numbers(void)
{
	for (int x = 0; x <= 9: x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
