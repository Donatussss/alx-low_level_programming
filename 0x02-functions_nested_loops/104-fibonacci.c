#include <stdio.h>

/**
 * fibonacci - working func
 * Description - prints the 1st 50 fibonacci numbers
 * Return: no return data
 */
void fibonacci(void)
{
	int i = 1;
	int j = 1;
	int k = j;
	int l = j;

	while (i <= 98)
	{
		printf("%ld", l);
		if (i >= 2)
		{
			j = k;
			k = l;
		}

		l = k + j;
		if (i < 98)
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
