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
	int j = 48;

	while (i < 57)
	{
		j = 48;
		while (j < 58)
		{
			if (i < j )
			{
				putchar(i);
				putchar(j);
			}

			if ((i + j) !=  113)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}

		i++;
	}
	putchar('\n');

	return (0);
}
