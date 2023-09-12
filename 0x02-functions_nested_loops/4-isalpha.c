#include "main.h"
/**
 * _islalpha - entry point
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
