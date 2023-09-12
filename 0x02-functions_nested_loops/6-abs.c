#include "main.h"
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
