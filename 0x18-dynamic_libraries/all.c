#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}


/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to
 * the buffer pointed to by dest.
 * @dest: destination buffer
 * @src: first address of char
 * Return: var with dest's address
 */

char *_strcpy(char *dest, char *src)
{
	int step = 0;

	while (*(src + step) != '\0')
	{
		*(dest + step) = *(src + step);
		step++;
	}

	*(dest + step) = '\0';

	return (dest);
}


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


/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string appended to dest
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (dest);
}


/**
 * _strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string appended to dest
 * @n: no. of bytes to take from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		if (*(src + j) == 0)
		{
			break;
		}
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (dest);
}


/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (j < n)
	{
		if (*(src + j) == 0)
		{
			break;
		}

		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	while (j < n)
	{
		*(dest + i) = '\0';
		i++;
		j++;
	}

	return (dest);
}


/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r_value = 0;

	while ((*(s1 + i) != '\0') && (*(s2 + i) != '\0'))
	{
		if ((*(s1 + i) > *(s2 + i)) || (*(s1 + i) < *(s2 + i)))
		{
			r_value = *(s1 + i) - *(s2 + i);
			break;
		}

		i++;

	}

	return (r_value);
}


/**
 * _puts - prints a string, followed by a new
 * line, to stdout
 * @s: string to print
 * Return: no return data
 */

void _puts(char *s)
{
	int step = 0;

	while (*(s + step) != '\0')
	{
		_putchar(*(s + step));
		step++;
	}

	_putchar('\n');

}


/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: points to memory area i.e a pointer
 * @b: the constant byte
 * @n: number of bytes to be filled by b
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}


/**
 * _memcpy - copies n bytes from memory area
 * src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: a pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}


/**
 * _strchr -  a function that locates a character
 * in a string
 * @s: pointer to start of string
 * @c: character to locate
 * Return: a pointer to the first occurrence of
 * the character c in the string s, or NULL if the
 * character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *location = NULL;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			location = s + i;
			break;
		}

		i++;
	}

	if (*(s + i) == c)
	{
		location = s + i;
	}

	return (location);
}


/**
 * _strspn - a function that gets the length of
 * a prefix substring. i.e how far in s do we have
 * to go before finding a character that is not in
 * accept
 * @s: string to check
 * @accept: string with prefix characters
 * Return: number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (_strchr(accept, *(s + i)) == NULL)
		{
			break;
		}

		i++;
	}

	return (i);
}


/**
 * _strn - a function that locates a character
 * in a string
 * @s: pointer to start of string
 * @c: character to locate
 * Return: a number of  the first occurrence of
 * the character c in the string s
 */

int _strn(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			break;
		}

		i++;
	}

	return (i);
}

/**
 * _strpbrk - a function that searches a string for
 * any of a set of bytes.
 * @s: string to be checked
 * @accept: string with bytes to be located in s
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int min = INT_MAX;
	int i = 0;
	char *c = NULL;
	char *f = NULL;
	int temp = 0;

	while (*(accept + i) != '\0')
	{
		c = _strchr(s, *(accept + i));

		if (c != NULL)
		{
			temp = _strn(s, *c);

			if (temp < min)
			{
				min = temp;
				f = c;
			}
		}

		i++;
	}

	return (f);
}


/**
* _strstr -  locates a substring
* @haystack: string to search needle
* @needle: string to search
* Return: pointer to the beginning of the located substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
				break;
		}
		if (*(needle + j) == '\0')
			return (&haystack[i]);
	}
	return ('\0');
}


/**
 * _islower - entry point
 * Description - checks if character is lower case
 * @c : character to check the case
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * _isdigit - entry point
 * Description - checks if character is a digit
 * @c : character to check the case
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * _isupper - entry point
 * Description - checks if character is upper case
 * @c : character to check the case
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isalpha - entry point
 * Description - checks if character is alphabet both lower and uppercase
 * @c : character to check if alphabet
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _abs - entry point
 * Description - prints absolute value  of number
 * @n : number to get absolute value
 * Return: absolute value of number
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}


/**
 * _strlen - returns length of string
 * @s: pointer to first char in string
 * Return: int length of string
 */

int _strlen(char *s)
{
	int str_len = 0;
	char comp = *s;

	while (comp != '\0')
	{
		str_len++;
		comp = *(s + str_len);
	}

	return (str_len);
}
