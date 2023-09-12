#include <stdio.h>

/**
 * natural - working func
 * Description - prints the sum of multiples of 3 or 5 below 1024
 * Return: no return data
 */
void natural(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
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
	natural();
	return (0);
}
