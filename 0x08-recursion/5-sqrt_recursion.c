#include "main.h"

/**
*_sqrt_aux - aux function
*@n: natural number
*@j: sqrt
*Return: sqrt
*/

int _sqrt_aux(int n, int j)
{
	if (j * j == n)
		return (j);
	else if (j * j > n)
		return (-1);
	else
		return (_sqrt_aux(n, j + 1));
}

/**
*_sqrt_recursion - returns the natural square root of a number
*@n: number
*Return: sqrt
*/

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	else
		return (_sqrt_aux(n, 0));
}
