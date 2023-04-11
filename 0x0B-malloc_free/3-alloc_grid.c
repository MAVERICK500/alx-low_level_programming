#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;	
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	if (!array[i])
	{
		for (j = 0; j < i; j++)
		{
			free(array[j]);
		}
		free(array[i]);
		return (NULL);
	}
	}

	for (i = 0; array[i]; i++)
	for (j = 0; array[i][j]; j++)
		array[i][j] = 0;
	return (array);
}
