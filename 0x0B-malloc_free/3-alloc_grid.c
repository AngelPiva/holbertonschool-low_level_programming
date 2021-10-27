#include <stdlib.h>

/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: width
*@height: height
*Return: poi
*/

int **alloc_grid(int width, int height)
{
	int **poi, a, b;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	poi = malloc(height * sizeof(int));
	if (poi == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		poi[a] = malloc(width * sizeof(int));
		if (poi[a] == NULL)
		{
			for (a -= 1; a >= 0; a--)
			{
				free(poi[a]);
			}
			free(poi);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			poi[a][b] = 0;
		}
	}
	return (poi);
}
