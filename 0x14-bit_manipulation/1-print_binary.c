#include "main.h"
#include <stdlib.h>

/**
 * print_binary - a function that prints the
 * binary representation of a number
 * @n: decimal number
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */

void print_binary(unsigned long int n)
{
	if (!(n >> 1))
	{
		_putchar((n & 1) + 48);
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
