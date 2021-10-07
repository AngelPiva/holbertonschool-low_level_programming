#include "main.h"

/**
*print_line - draws a straight line in the terminal n times
*@n: number of times the character should be printed
*/

void print_line(int n)
{
	int c;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (c = 1; c <= n; c++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
