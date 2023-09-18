#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of
 * integers, followed by a new line
 * @a: address of first int
 * @n: length of in
 * Return: no return data
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
