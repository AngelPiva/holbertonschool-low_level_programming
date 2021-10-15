#include "main.h"

/**
*rev_string -  reverses a string
*@s: pointer
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
