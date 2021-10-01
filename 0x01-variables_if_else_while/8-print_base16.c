#include <stdio.h>

/**
*main - base16
*Return: 0
*/

	int main(void)
	{
		int n, N;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	for (N = 'a'; N <= 'f'; N++)
	putchar(N);
	putchar('\n');
	return (0);
}
