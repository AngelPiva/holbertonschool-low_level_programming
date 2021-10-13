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
	half = c / 2;

	while (str[half] != 0)
	{
	_putchar(str[half]);
	half++;
	}
	_putchar('\n');
}
