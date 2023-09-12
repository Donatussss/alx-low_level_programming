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

	while (n < 24)
	{
		x = 0;
		while (x < 60)
		{
			if (n < 10)
			{
				_putchar('0');
			}

			_putchar(n + '0');
			_putchar(':');

			if (x < 10)
			{
				_putchar('0');
			}

			_putchar(x + '0');
			_putchar('\n');
			x++;
		}
		
		n++;
	}
}
