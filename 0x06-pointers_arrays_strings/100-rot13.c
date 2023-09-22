#include "main.h"

/**
* rot13 - encodes a string using rot13
* @string: pointer to string to encode
* Return: pointer to encoded string
*/

char *rot13(char *s)
{
	int i = 0;
	int j;
	char alphbt[] = "abcdefghijklmnopqrstuvwxyxABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(string + count) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(string + count) == alphbt[j])
			{
				(*(string + count) = rot13[j]);
				break;
			}
		}
		i++;
	}
	return (s);
}
