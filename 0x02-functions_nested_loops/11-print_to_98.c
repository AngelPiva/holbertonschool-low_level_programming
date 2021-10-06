#include "main.h"
#include <stdio.h>

/**
*print_to_98 - all natural numbers from n to 98, followed by a new line
*@n: number passed to your function
*Return: 0
*/

void print_to_98(int n)
{
	int v;

	if (n <= 97)
	{
	for (v = n; v <= 97; v++)
	printf("%d, ", v);
	}
	else
	for (v = n; v > 98; v--)
	printf("%d, ", v);
	printf("98\n");
}
