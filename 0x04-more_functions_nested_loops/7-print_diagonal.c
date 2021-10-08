#include "main.h"

/**
*print_diagonal - draws a diagonal line on the terminal
*@n: number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int d, f;

	if (n <= 0)
	_putchar('\n');
	for (d = 0; d < n; d++)
	{
	for (f = 0; f < d; f++)
	_putchar(' ');
	_putchar('\\');
	_putchar('\n');
	}
}
