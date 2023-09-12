#include "main.h"
/**
 * print_last_digit - entry point
 * Description - prints last digit of number
 * @n : number to print last digit
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x *= -1;
	}

	_putchar(x + '0');
	return (x);
}
