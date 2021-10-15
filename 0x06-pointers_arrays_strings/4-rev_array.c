#include "main.h"

/**
*reverse_array -  reverses an array
*@a: pointer
*@n: number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int i;
	int f = a[0];

	for (i = 0; i < n; i++)
	{
		n--;
		f = a[i];
		a[i] = a[n];
		a[n] = f;
	}
}
