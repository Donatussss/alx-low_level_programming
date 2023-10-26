#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value
 * of a bit at a given index where index is the index,
 * starting from 0 of the bit you want to get
 * @n: decimal number
 * @index: index of bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= 64)
		return (-1);

	n >>= index;

	return (n & 1);
}
