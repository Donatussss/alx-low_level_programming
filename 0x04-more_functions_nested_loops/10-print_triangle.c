#include "main.h"
/**
* print_triangle - prints a triangle
* @size: int data type
* Return: void
*/
void print_triangle(int size)
{
	int x, y;

	y = size;

	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		for (x = 0; x < y; x++)
			_putchar((x < size - 1) ? ' ' : '#');
		_putchar('\n');
		size--;
	}
}
