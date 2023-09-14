#include "main.h"
/*
 * _isdigit - entry point
 * @c: number to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c < 10 && c > -10)
	{
		return (1);
	}
	return (0);
}
