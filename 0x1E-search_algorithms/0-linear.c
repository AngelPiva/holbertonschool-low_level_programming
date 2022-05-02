#include "search_algos.h"

/**
 *linear_search - searches for a value in an array using the Linear search algo
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *Return: first index where value is located, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}