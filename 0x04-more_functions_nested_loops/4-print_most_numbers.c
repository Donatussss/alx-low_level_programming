#include "main.h"
/**
 * print_numbers - entry point
 * Description - print 0 to 9
 * Return: no return data
 */

void print_most_numbers(void)
{
	int x = 0;
	
	while (x <= 9 && x != 2 && x != 4)
	{
		if (x != 2 || x != 4)
		{
			_putchar(x + '0');
		}
		x++;
	}
	_putchar('\n');
}
