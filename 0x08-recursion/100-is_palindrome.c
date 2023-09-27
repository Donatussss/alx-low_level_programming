#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string to find length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_temp - a function that checks
 * if string is a palindrome
 * @s: pointer to point in string
 * @p: start point
 * @n: string length
 */

int is_palindrome_temp(char *s, int p, int n)
{
	int temp;

	if (p == n / 2 - 1)
	{
		if (n % 2 == 0)
		{
			return (*(s + p) == *(s + (n - 1) - p) ? 1 : 0);
		}

		return (1);
	}

	temp = *(s + p) == *(s + (n - 1) - p) ? 1 : 0;

	return (temp * is_palindrome_temp(s, p + 1, n));
}

/**
 * is_palindrome - a function that returns 1 if a
 * string is a palindrome and 0 if not
 * palindrome - a word, phrase, or sequence that reads
 * the same backwards as forwards, e.g. madam or nurses run
 * @s: string to check
 * Return: an int
 */

int is_palindrome(char *s)
{
	int str_len = _strlen_recursion(s);

	if (str_len <= 1)
	{
		return (1);
	}

	return (is_palindrome_temp(s, 0, str_len));

}
