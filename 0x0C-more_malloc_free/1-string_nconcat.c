#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings
* @s1: 1st string
* @s2: 2nd string
* @n: number of bytes of 2nd string
* Return: a pointer to newly allocated memory or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, str_len1, str_len2;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str_len1 = 0, str_len2 = 0;
	while (*(s1 + str_len1))
		str_len1++;
	while (*(s2 + str_len2))
		str_len2++;
	if (n < str_len2)
		str_len2 = n;

	new_str = malloc(sizeof(char) * (str_len1 + str_len2 + 1));

	if (new_str == 0)
		return (0);

	for (x = 0; x < str_len1; x++)
		*(new_str + x) = *(s1 + x);

	for (x = 0, y = str_len1; x < str_len2; x++, y++)
		*(new_str + y) = *(s2 + x);

	*(new_str + y) = '\0';
	return (new_str);
}
