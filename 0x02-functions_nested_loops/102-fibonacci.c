#include <stdio.h>

/**
 * fibonacci - working func
 * Description - prints the 1st 50 fibonacci numbers
 * Return: no return data
 */
void fibonacci(void)
{
	int i = 0;
	int j = 0;
	long sum = 0;
	long fib[50];

	fib[0] = 1;
	fib[1] = 1;

	while (i <= 50)
	{
		j = 0;
		sum = 0;
		while (j < i)
		{
			sum += fib[j];
			j++;
		}

		if (j > 1)
		{
			fib[i - 1] = sum;
		}

		if (sum > 0)
		{
			printf("%ld", sum);
		}

		if (i < 50 && sum > 0)
		{
			printf(", ");
		}
		i++;
	}

}

/**
 * main - entry point
 * Description - executes natural
 * Return: no return data
 */
int main(void)
{
	fibonacci();
	return (0);
}
