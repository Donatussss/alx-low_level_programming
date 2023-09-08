#include<stdio.h>
#include<stdlib.h>
/**
* main - main block
*
* Description - print alphabet
*
* Return: 0
*/
int main(void)
{
	int i = 48;
	int j = 0;

	while (i < 58)
	{
		j = 0;

		while (j < 10)
		{
			putchar(48 + ((i + j) % 58));
			putchar(',');
			putchar(' ');
			j++;
		}

		i++;
		putchar('\n');
	}

	return (0);
}
