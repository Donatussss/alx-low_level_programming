#include <stdio.h>
/**
* main - entry point
* prints "Fizz" for numbers divisible by 3,
* prints "Buzz" for numbers divisible by 5,
* prints "FizzBuzz" for numbers divisible by both 3 and 5
* numbers 1 to 0
* Return: 0
*/
int main(void)
{
	int num;

	for (num = 1; num <= 99; num++)
	{
		if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", num);
	}
	printf("Buzz\n");
	return (0);
}
