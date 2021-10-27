#include <stdlib.h>

/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: width
*@height: height
*Return: poi
*/

int **alloc_grid(int width, int height)
{
	int **poi;
	int *tmp;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	poi = malloc(height * sizeof(int *));
	if (poi == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		tmp = malloc(width * sizeof(int));
		if (tmp == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(poi[a]);
			}
			free(poi);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			tmp[b] = 0;
		}
		poi[a] = tmp;
	}
	return (poi);
}
