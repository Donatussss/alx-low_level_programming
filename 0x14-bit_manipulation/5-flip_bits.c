#include "main.h"
#include <stdlib.h>

/**
 * binary_count - a function that counts the 1s in a binary
 * representation of a number
 * @n: int
 * Return: 1s count
 */

unsigned int binary_count(unsigned long int n)
{
	if (!(n >> 1))
	{
		return (n & 1);
	}

	return ((n & 1) + binary_count(n >> 1));
}

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: 1st int
 * @m: 2nd int
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = n ^ m;

	return (binary_count(i));
}
