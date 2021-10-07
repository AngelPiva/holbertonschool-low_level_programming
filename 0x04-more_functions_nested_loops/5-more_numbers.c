#include "main.h"
/**
*more_numbers - print 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
	for (n2 = 0; n2 <= 14; n2++)
	{
	if (n2 >= 10)
	_putchar((n2 / 10) % 10 + 48);
	_putchar((n2 % 10) + 48);
	}
	_putchar('\n');
	}
}
