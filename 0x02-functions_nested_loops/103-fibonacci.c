#include <stdio.h>

/**
 * fibonacci_even_sum - working func
 * Description - prints the 1st 50 fibonacci numbers
 * Return: no return data
 */
void fibonacci_even_sum(void)
{
	long i = 1;
	long j = 1;
	long k = j;
	long l = j;
	long sum = 0

	while (l <= 4000000)
	{
		if (l % 2 == 0)
		{
			sum += l;
		}
		if (i >= 2)
		{
			j = k;
			k = l;
		}

		l = k + j;
		i++;
	}

	printf("%ld\n", sum);

}

/**
 * main - entry point
 * Description - executes natural
 * Return: no return data
 */
int main(void)
{
	fibonacci_even_sum();
	return (0);
}
