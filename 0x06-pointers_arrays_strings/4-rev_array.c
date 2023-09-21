#include "main.h"

/**
 * reverse_array - reverses the content of
 * an array of integers
 * @a: pointer to array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int i = 0;
	int offset = n % 2 == 0 ? 0 : 1;

	if (n > 1)
	{
		while (n != i - offset)
		{
			n--;
			temp = *(a + i);
			*(a + i) = *(a + n);
			*(a + n) = temp;
			i++;
		}
	}
}
