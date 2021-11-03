#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
*array_iterator - function that executes a function given as a parameter
*@array: array
*@size: size
*@action: pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array != NULL && action != NULL && size > 0)
	{
		for (n = 0; n < size; n++)
		{
			(*action)(array[n]);
		}
	}
}
