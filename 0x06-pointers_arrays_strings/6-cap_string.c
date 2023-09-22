#include "main.h"

/**
 * check_char - checks character
 * @a: pointer to dash separated string
 * @c: character itself
 * Return: 1 if found, 0 if not found
 */

int check_char(char *a, char c)
{
	int i = 0;
	int found = 0;

	while (*(a + i) != '\0')
	{
		if (*(a + i) == 45)
		{
			i++;
			continue;
		}

		else if (*(a + i) == c)
		{
			found = 1;
			break;
		}

		i++;

	}

	return (found);
}

/**
 * cap_string -  capitalizes all words of a string
 * @s: pointer to string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	char delimiter[] = " -\t-\n-\r-,-;-.-!-?-\"-(-)-{-}";
	char *ptr = delimiter;
	int i = 0;
	int capitalize = 0;

	while (*(s + i) != '\0')
	{
		if (check_char(ptr, *(s + i)))
		{
			capitalize = 1;
		}

		else if (capitalize)
		{
			if (*(s + i) >= 97 && *(s + i) <= 122)
			{
				*(s + i) = *(s + i) - 32;
			}

			capitalize = 0;
		}

		i++;
	}

	return (s);
}
