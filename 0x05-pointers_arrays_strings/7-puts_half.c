#include "main.h"

/**
*puts_half - prints half of a string
*@str: pointer
*/

void puts_half(char *str)

{
	int c = 0;
	int half;

	while (str[c] != '\0')
	c++;

	if (c % 2 == 0)
	half = (c / 2);
	if (c % 2 == 1)
	half = (c - 1) / 2;

	while (half < c)
	{
	_putchar(str[half]);
	half++;
	}
	_putchar('\n');
}
