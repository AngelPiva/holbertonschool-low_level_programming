#include <stdio.h>

/**
*main - entry point
*Return: 0
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
	if (num % 15 == 0)
	{
	printf("FizzBuzz");
	printf(" ");
	}
	else if (num % 3 == 0)
	{
	printf("Fizz");
	printf(" ");
	}
	else if (num % 5 == 0)
	{
	printf("Buzz");
	printf(" ");
	}
	else if (num % 15 == 0)
	{
	printf("FizzBuzz");
	printf(" ");
	}
	else if (num > 99)
	printf("%d", num);
	else
	{
	printf("%d", num);
	printf(" ");
	}
	}
	putchar('\n');
	return (0);
}
