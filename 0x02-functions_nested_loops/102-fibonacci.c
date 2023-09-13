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
	int sum = 0;
	int fib[50];
	fib[0] = 1;
	fib[1] = 2;

	while (i <= 50)
	{
		j = 0;
		sum = 0;
		while (j < i)
		{
			sum += fib[j];
			j++;
		}

		if(j > 1)
		{
			fib[i] = sum;			
		}

		if(sum > 0)
		{
			printf("%d", sum);
		}

		if (i < 50 && sum > 0)
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
