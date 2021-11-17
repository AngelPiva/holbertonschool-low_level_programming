#include <stdio.h>
#include "main.h"

/**
*
*
*/

void print_times_table(int n)
{
	int a, c, d = 0;

	if (n <= 15 && n > 0)
	{
		for (c = 0; c <= n; c++)
		{
			for (a = 0; a <= n; a++)
			{
				d = a * c;
				if (d > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((d / 100) + 48);
					_putchar(((d % 100) / 10) + 48);
					_putchar(((d % 100) % 10) + 48);
				}
				else if (d > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((d / 10) + 48);
					_putchar((d % 10) + 48);
				}
				else
				{
					if (a != 0)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					}
					_putchar((d % 10) + 48);
				}
			}
			_putchar(10);
		}
	}
	else
	{
	}
}
