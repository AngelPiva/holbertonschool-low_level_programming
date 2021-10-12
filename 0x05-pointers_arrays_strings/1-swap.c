#include "main.h"

/**
*swap_int - swaps the values of two integers
*@a: integrer 1
*@b: integrer 2
*/

void swap_int(int *a, int *b)
{
	int n1, n2;

	n1 = *a;
	n2 = *b;

	*b = n1;
	*a = n2;

}
