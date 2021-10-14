#include "main.h"
#include <stdio.h>

/**
*print_array - prints n elements of an array of integers
*@a: pointer to main
*@n: number of elements of the array
*/

void print_array(int *a, int n)
{
	int el;

	for (el = 0; el < n; el++)
	{
	printf("%d", a[el]);
	if (el != (n - 1))
	printf(", ");
	}
	printf("\n");
}
