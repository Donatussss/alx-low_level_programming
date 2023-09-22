#include "main.h"

/**
 * rot13 - encodes string in rot13
 * @s: pointer to string
 * Return: pointer to string
 */

char *rot13(char *s)
{
	int i = 0;
	
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) = (((*(s + i) - 97) + 13) % 26) + 97;
		}

		else if (*(s + i) >= 65 && *(s + i) <= 90)
		{
			*(s + i) = (((*(s + i) - 65) + 13) % 26) + 65;
		}

		i++;
	}

	return (s);
}
