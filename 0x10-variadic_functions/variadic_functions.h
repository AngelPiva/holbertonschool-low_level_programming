#ifndef HEADER
#define HEADER
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
*struct op_s - option structure
*@printer: format
*@f: function asociated
*/
typedef struct op_s
{
	char *printer;
	void (*f)(va_list pr);
} pr_a;

void print_char(va_list pr);
void print_int(va_list pr);
void print_float(va_list pr);
void print_string(va_list pr);
#endif
