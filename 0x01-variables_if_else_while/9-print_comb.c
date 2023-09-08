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
	int modval = 48;

	while (i < 58)
	{
		j = 0;

		while (j < 10)
		{
			if ((i + j) > 57)
			{
				modval = 58;
			}
			else
			{
				modval = 48;
			}
			putchar(48 + ((i + j) % modval));
			putchar(',');
			putchar(' ');
			j++;
		}

		i++;
		putchar('\n');
	}

	return (0);
}
