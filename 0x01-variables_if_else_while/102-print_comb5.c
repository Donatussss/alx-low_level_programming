#include <stdio.h>
/**
* main - Entry
* Description - Combination of four numbers with space
* Return: 0 success
*/
int main(void)
{
	int count1 = 0;
	int digit1, digit2;
	int count2;
	int digit3, digit4;

	while (count1 <= 98)
	{
		digit1  = (count1 / 10 + 48);
		digit2 = (count1 % 10 + 48);
		count2 = 0;
		while (count2 <= 99)
		{
			digit3 = (count2 / 10 + 48);
			digit4 = (count2 % 10 + 48);
			if (count1 < count2)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(' ');
				putchar(digit3);
				putchar(digit4);
				if (count1 != 98)
				{
					putchar(',');
					putchar(' ');
				}}
				count2++;
			}
			count1++;
		}
		putchar('\n');
	return (0);
}
