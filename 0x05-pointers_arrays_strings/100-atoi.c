#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: start address of string
 * Return: int conversion of string
 */

int _atoi(char *s)
{
	int step = 0;
	int sign = 1;
	unsigned int final_num = 0;
	char curr_char = *s;
	int num_start = 0;

	while (*(s + step) != '\0')
	{
		if (curr_char >= 48 && curr_char <= 57)
		{
			if (!num_start)
			{
				num_start = 1;
			}

			final_num = (final_num * 10) + (curr_char - 48);
		}

		else if (curr_char == '-')
		{
			sign *= -1;
		}

		else
		{
			if (num_start)
			{
				break;
			}
		}

		step++;
		curr_char = *(s + step);

	}

	return (final_num * sign);
}
