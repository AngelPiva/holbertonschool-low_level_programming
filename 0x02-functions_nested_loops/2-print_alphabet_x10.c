#include "main.h"

/**
*print_alphabet_x10 - alphabet x10
*Return: 0
*/

void print_alphabet_x10(void)
{
	int n, r = 1;

	while (r <= 10)
	{
	r++;
	for (n = 'a'; n <= 'z'; n++)
	_putchar(n);
	_putchar('\n');
	}
}
