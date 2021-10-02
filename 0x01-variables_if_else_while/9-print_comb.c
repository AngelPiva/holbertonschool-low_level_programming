#include <stdio.h>

/**
*main - base16
*Return: 0
*/

	int main(void)
	{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	putchar(44);
	}
	putchar('\n');
	return (0);
	}
