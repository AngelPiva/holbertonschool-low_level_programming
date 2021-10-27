#include <stdlib.h>
#include "main.h"

/**
*free_grid -  frees a 2 dimensional grid previously created by your alloc_grid
*@grid: grid
*@height: height
*/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
