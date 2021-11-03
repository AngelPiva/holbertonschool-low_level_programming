#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
*int_index - function that searches for an integer.
*@array: array
*@size: size
*@cmp: pointer to the function to be used to compare values
*Return: n
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (n = 0; n < size; n++)
			{
				if (cmp(array[n]))
				{
				return (n);
				}
			}
		}
	}
	return (-1);
}
