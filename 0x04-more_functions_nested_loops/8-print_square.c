#include "main.h"

/**
*
*
*/

void print_square(int size)
{
	int n, a;

	if (size <= 0)
	_putchar('\n');
	for (n = 0; n < size; n++)
	{
	for (a = 0; a < size; a++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
