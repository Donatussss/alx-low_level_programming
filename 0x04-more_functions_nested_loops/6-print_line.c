#include "main.h"
/**
* print_line - draws a straight line
* @n: integer
* Return: no return data
*/
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
