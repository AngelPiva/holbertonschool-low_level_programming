#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*print_numbers - function that prints numbers
*@separator: string to be printed between numbers
*@n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (n > 0)
	{
		va_start(num, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(num, int));
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	va_end(num);
	}
	printf("\n");
}
