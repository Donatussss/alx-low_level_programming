#include "main.h"
/**
 * jack_bauer - entry point
 * Description - prints every minute of the day
 * Return: no return data
 */

void jack_bauer(void)
{
	int n = 0;
	int x = 0;
	int n1 = 1;
	int x1 = 1;
	int diffn = 0;
	int diffx = 0;

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
				n1 = 1;
				diffn = n - 10;
				while (diffn >= 10)
				{
					n1++;
					diffn -= 10;
				}

				_putchar(n1 + '0');
			}

			_putchar((n % 10) + '0');
			_putchar(':');

			if (x < 10)
			{
				_putchar('0');
			}

			else if (x >= 10)
			{
				x1 = 1;
				diffx = x - 10;
				while (diffx >= 10)
				{
					x1++;
					diffx -= 10;
				}

				_putchar(x1 + '0');
			}

			_putchar((x % 10) + '0');
			_putchar('\n');
			x++;
		}

		n++;
	}
}
