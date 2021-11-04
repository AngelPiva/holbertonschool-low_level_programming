#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*sum_them_all - function that returns the sum of all its parameters
*@n: n
*Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i;
	int sum = 0;

	if (n != 0)
	{
	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(par, int);
	}
	return (sum);
	}
	return (0);
}
