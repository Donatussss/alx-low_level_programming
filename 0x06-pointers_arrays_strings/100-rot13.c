#include "main.h"

/**
 * rot13 - encodes string in rot13
 * @s: pointer to string
 * Return: pointer to string
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	int n1 = 97;
	int n2 = 122;

	while (i < 2)
	{
		j = 0;

		while(*(s + j) != '\0')
		{
			if (*(s + j) >= n1 && *(s + j) <= n2)
			{
				*(s + j) = (((*(s + j) - n1) + 13) % 26) + n1;
			}

			j++;
		}

		n1 = 65;
		n2 = 90;
		i++;
	}

	return (s);
}
