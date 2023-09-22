#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to string
 * Return: pointer to string
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	int lower_arr[] = {97, 101, 111, 116, 108};
	int upper_arr[] = {65, 69, 79, 84, 76};
	int conv_arr[] = {52, 51, 48, 55, 49};

	while (*(s + i) != '\0')
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (*(s + i) == lower_arr[j] || *(s + i) == upper_arr[j])
			{
				*(s + i) = conv_arr[j];
				break;
			}
		}

		i++;
	}

	return (s);
}

