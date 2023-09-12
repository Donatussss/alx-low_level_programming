#include "main.h"
/**
 * print_first_digit - used in jack_bauer
 * Description - prints first digit of number with 2 or more digits
 * @x: int with 2 or more digits
 * Return: no return data
 */
void print_first_digit(int x)
{
	int x1 = 1;
	int diffx = x - 10;

	while (diffx >= 10)
	{
		x1++;
		diffx -= 10;
	}

	_putchar(x1 + '0');
}

/**
 * print_times_table - entry point
 * Description - prints n times table
 * @n: defines size of table
 * Return: no return data
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int r = 0;
	int n1 =  n <= 12? n : 0;

	while (i <= n1)
	{
		j = 0;
		while (j <= n1)
		{
			r = i * j;
			if (j > 0 && r < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}

			else if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				print_first_digit(r);
			}

			_putchar((r % 10) + '0');
			j++;

		}
		_putchar('\n');
		i++;
	}
}
