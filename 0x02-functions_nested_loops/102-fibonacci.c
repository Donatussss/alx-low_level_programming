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
	int sum = 1;
	int fib[51];
	fib[0] = 0;
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

		if(sum > 0)
		{
			fib[i] = sum;
			printf("%d", sum);
		}

		if (i < 50)
		{
			printf(", ");
		}

		i++;
	}

	printf("%d\n", sum);
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
