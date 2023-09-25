#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: string to be checked
 * @needle: substring to be located in haystack
 * Return:  a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int found = 0;
	char *f = NULL;
	char *temp = NULL;

	while (*(haystack + i) != '\0')
	{
		if (found && *(needle + j) == '\0')
		{
			f = temp;
			break;
		}

		if (*(haystack + i) == *(needle + j) && !found)
		{
			found = 1;
			temp = haystack + i;
		}

		else if (*(haystack + i) != *(needle + j) && found)
		{
			found = 0;
			j = 0;
			temp = NULL;
		}

		if (found)
			j++;

		i++;
	}

	if (found && *(needle + j) == '\0')
	{
		f = temp;
	}

	return (f);
}
