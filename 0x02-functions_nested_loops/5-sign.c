#include "main.h"
/**
 * print_sign - entry point
 * Description - checks sign of number
 * @n : number to check sign
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
