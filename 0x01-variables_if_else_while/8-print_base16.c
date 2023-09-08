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

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	i = 97;
	
	while (i < 103)
	{ 
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
