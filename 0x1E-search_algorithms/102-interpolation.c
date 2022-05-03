#include "search_algos.h"

/**
 *interpolation_search - searches a value in a sorted array using interp_search
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *Return: index where value is located, otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, middle = 0;

	if (!array)
		return (-1);

	for (; min <= max;)
	{
		middle = min + (((double)(max - min) /
					(array[max] - array[min])) * (value - array[min]));
		if (middle >= size)
		{
			printf("Value checked array[%ld] is out of range\n", middle);
			return (-1);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", middle, array[middle]);
		if (array[middle] < value)
			min = middle + 1;
		else if (array[middle] > value)
			max = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
