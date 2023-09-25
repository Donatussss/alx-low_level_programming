#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: 2d array with players' positions
 * Return: no return data
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
