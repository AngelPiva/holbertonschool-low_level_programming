#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints the sum of the two diagonals of a square of integ
*@a: pointer to square matrix
*@size: size
*/

void print_diagsums(int *a, int size)
{
	int run, suma1 = 0, suma2 = 0;

	for (run = 0; run < size; run++)
	{
		suma1 = suma1 + a[(size + 1) * run];
		suma2 = suma2 + a[(size - 1) * (run + 1)];
	}
	printf("%d, %d\n", suma1, suma2);
}
