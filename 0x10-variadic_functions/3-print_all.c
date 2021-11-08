#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
*print_all - function that prints anything
*@format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list pr;
	char *separator = "";
	unsigned int i = 0, p = 0;

	pr_a print[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(pr, format);

	while (format[i])
	{
		p = 0;
		while (print[p].printer != NULL)
		{
			if (print[p].printer[0] == format[i])
			{
				printf("%s", separator);
				print[p].f(pr);
				separator = ", ";
			}
			p++;
		}
		i++;
	}
	va_end(pr);
	printf("\n");
}

/**
*print_char - prints a char
*@pr: list
*/

void print_char(va_list pr)
{
	printf("%c", va_arg(pr, int));
}

/**
*print_int - prints a integer
*@pr: list
*/

void print_int(va_list pr)
{
	printf("%d", va_arg(pr, int));
}

/**
*print_float - prints a float
*@pr: list
*/

void print_float(va_list pr)
{
	printf("%f", va_arg(pr, double));
}

/**
*print_string - prints a string
*@pr: list
*/

void print_string(va_list pr)
{
	char *str;

	str = va_arg(pr, char *);
	if (str == NULL)
	{
	printf("(nil)");
	return;
	}
	printf("%s", str);
}
