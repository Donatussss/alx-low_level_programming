#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0
 */

int main(void)
{
	int i;
	int n;
	int sum = 0;
	int passwd[100];

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passwd[i] = rand() % 78;
		sum += (passwd[i] + 48);
		putchar(passwd[i] + 48);
		if ((2772 - sum) - 48 < 78)
		{
			n = 2772 - sum - 48;
			sum += n;
			putchar(n + 48);
			break;
		}
	}
	return (0);
}
