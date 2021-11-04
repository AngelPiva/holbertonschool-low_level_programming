#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*op_add - function that add two parameters
*@a: param 1
*@b: param 2
*Return: a + b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - function that returns the difference between two parameters
*@a: param 1
*@b: param 2
*Return: a - b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - function that multiplies two parameters
*@a: param 1
*@b: param 2
*Return: a * b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - function that divides two parameters
*@a: param 1
*@b: param 2
*Return: a / b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
*op_mod - function that (module) two parameters
*@a: param 1
*@b: param 2
*Return: a % b
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
