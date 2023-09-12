#include <stdio.h>
#include "main.h"
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
	int n1 =  n <= 15 ? n : -1;

	while (i <= n1)
	{
		j = 0;
		while (j <= n1)
		{
			r = i * j;
			if (r < 10)
			{
				if (j > 0)
				{					
					printf(",   %d", r);
				}
				else
				{
					printf("%d", r);
				}
			}

			else if (r >= 10 && r < 100)
			{
				printf(",  %d", r);
			}

			else if (r >= 100)
			{
				printf(", %d", r);
			}

			j++;

		}
		printf("\n");
		i++;
	}
}
