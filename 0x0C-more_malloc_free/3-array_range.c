#include <stdlib.h>

/**
*array_range - creates an array of integers
*@min: min value
*@max: max value
*Return: ptr
*/

int *array_range(int min, int max)
{
	int *ptr, n;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min) * sizeof(int) + 4);
	if (ptr == 0)
		return (NULL);
	for (n = 0; min <= max; n++)
	{
		ptr[n] = min;
		min++;
	}
	return (ptr);
}
