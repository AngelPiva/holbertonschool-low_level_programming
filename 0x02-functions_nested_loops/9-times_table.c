#include "main.h"

/**
*times_table - tablas
*Return: 0
*/

void times_table(void)
{
	int n1, n2, pr;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			pr = n1 * n2;
			if (n2 != 0)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (n2 == 0)
			{
			_putchar('0');
			}
			else if (pr >= 10)
			{
			_putchar((pr / 10) + '0');
			_putchar((pr % 10) + '0');
			}
			else if ((pr < 10) && (n2 != 0))
			{
			_putchar(' ');
			_putchar((pr % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
