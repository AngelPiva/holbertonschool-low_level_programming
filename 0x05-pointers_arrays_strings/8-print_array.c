#include "main.h"
#include <stdio.h>

/**
*
*
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
