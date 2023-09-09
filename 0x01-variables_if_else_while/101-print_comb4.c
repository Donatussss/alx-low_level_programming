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
	int k = 48;

	while (i < 56)
	{
		j = 48;
		while (j < 57)
		{
			k = 48;
			while (k < 58)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if ((i + j + k == 167) && i == 55)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
