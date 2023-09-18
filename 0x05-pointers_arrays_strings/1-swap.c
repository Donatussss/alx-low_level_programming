#include "main.h"

/**
 * swap_int  - swaps the values of two integers
 * @a: first int
 * @b: second int
 * Return: no return data
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
