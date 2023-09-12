#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - entry point
 * Description - prints all natural numbers from n to 98, followed by a new line.
 * @n: starting int
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}

			n++;
		}

	}

	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", n);
	}

	printf("\n");
}
