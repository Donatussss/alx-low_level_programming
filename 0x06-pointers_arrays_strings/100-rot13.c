#include "main.h"

/**
* rot13 - encodes a string using rot13
* @s: pointer to string to encode
* Return: pointer to encoded string
*/

char *rot13(char *s)
{
	int i = 0;
	int j;
	char alphbt[] = "abcdefghijklmnopqrstuvwxyxABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{

			if (*(s + i) == alphbt[j])
			{
				(*(s + i) = rot13[j]);
				break;
			}
		}

		i++;
	}

	return (s);
}
