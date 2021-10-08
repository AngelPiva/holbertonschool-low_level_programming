#include "main.h"

/**
*print_triangle - prints a triangle
*size: size of the triangle
*/

void print_triangle(int size)
{
	int a, b, e;

	if (size <= 0)
		_putchar ('\n');
	for (a = 1; a <= size; a++)
	{
		for (b = size; b > a; b--)
		{
			_putchar(' ');
		}
		for (e = 1; e <= a; e++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
