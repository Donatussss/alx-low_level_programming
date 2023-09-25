#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers
 * @a: pointer to start of int array
 * @size: size of square matrix
 * Return: no return data
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int j1 = size - 1;
	int diagsum1 = 0;
	int diagsum2 = 0;

	while (i < size)
	{
		j = 0;
		j1 = size - 1;

		while (j < size)
		{
			if (i == j)
			{
				diagsum1 += *(a + i * size + j);
			}

			if (j1 == (size - 1) - i)
			{
				diagsum2 += *(a + i * size + j1);
			}

			j++;
			j1--;
		}

		i++;
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
