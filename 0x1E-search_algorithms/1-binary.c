#include "search_algos.h"

/**
 *binary_search - searches value in a sorted array using the Binary search algo
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: value to search for
 *Return: index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, middle = 0, i = 0;

	if (!array)
		return (-1);

	for (; min <= max;)
	{
		middle = (min + max) / 2;
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i != max)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			max = middle - 1;
		else
			min = middle + 1;
	}
	return (-1);
}
