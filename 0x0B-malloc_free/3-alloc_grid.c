#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - used to allocate a two-dimensional grid
* @width: width of grid
* @height: height of grid
* Return: Null
*/
int **alloc_grid(int width, int height)
{
	int **dee, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	dee = malloc(height * sizeof(int *));
	if (dee == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dee[i] = malloc(width * sizeof(int));
		if (dee[i] == NULL)
		{
			while (i >= 0)
			{
				free(dee[i]);
				i--;
			}
			free(dee);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			dee[i][j] = 0;
	}
	return (dee);
}

