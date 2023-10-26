#include "main.h"

/**
 * clear_bit - a function that sets the value of a
 * bit to 0 at a given index where index is the index,
 * starting from 0 of the bit you want to set
 * @n: pointer to int
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (index >= 64)
		return (-1);

	*n = ~(*n);
	i = 1 << index;
	*n = (*n | i);
	*n = ~(*n);

	return (1);
}
