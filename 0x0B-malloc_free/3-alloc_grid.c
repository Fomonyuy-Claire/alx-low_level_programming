#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **2dim;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	2dim = malloc(sizeof(int *) * height);

	if (2dim == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		2dim[x] = malloc(sizeof(int) * width);

		if (2dim[x] == NULL)
		{
			for (; x >= 0; x--)
				free(2dim[x]);

			free(2dim);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			2dim[x][y] = 0;
	}

	return (2dim);
}
