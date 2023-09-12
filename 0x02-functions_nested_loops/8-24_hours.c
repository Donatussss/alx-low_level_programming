#include "main.h"
/**
 * jack_bauer - entry point
 * Description - prints every minute of the day
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

void jack_bauer(void)
{
	int n = 0;
	int x = 0;

	while (n < 24)
	{
		x = 0;
		while (x < 60)
		{
			if (n < 10)
			{
				_putchar('0');
			}

			else if (n >= 10)
			{
				print_first_digit(n);
			}

			_putchar((n % 10) + '0');
			_putchar(':');

			if (x < 10)
			{
				_putchar('0');
			}

			else if (x >= 10)
			{
				print_first_digit(x);
			}

			_putchar((x % 10) + '0');
			_putchar('\n');
			x++;
		}

		n++;
	}
}
