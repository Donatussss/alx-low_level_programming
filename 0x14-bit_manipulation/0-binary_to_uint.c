#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: char binary
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, nonzero = 0, place_value = 1;
	int non_zero_len = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (result);

	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && !nonzero)
		{
			nonzero = 1;
			non_zero_len = i - 1;
		}

		i++;
	}
	i--;

	while (i > non_zero_len)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);

		result += (*(b + i) & 1) * place_value;
		place_value *= 2;
		i--;
	}

	return (result);
}
