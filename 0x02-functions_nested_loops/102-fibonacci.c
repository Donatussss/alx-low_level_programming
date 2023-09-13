#include <stdio.h>

/**
 * fibonacci - working func
 * Description - prints the 1st 50 fibonacci numbers
 * Return: no return data
 */
void fibonacci(void)
{
	long i = 1;
	long j = 1;
	long k = j;
	long l = j;

	while (i <= 50)
	{
		printf("%ld", l);
		if(i >= 2)
		{
			j = k;
			k = l;
		}

		l = k + j;
		if (i < 50)
		{
			printf(", ");
		}

		i++;
	}
	printf("\n");

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
