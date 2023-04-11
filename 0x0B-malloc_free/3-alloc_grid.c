#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
    int **array;

    if (width <= 0 || height <= 0)
        return (NULL);

    array = malloc(sizeof(int *) * height);
    if (!array)
        return (NULL);
    for (int i = 0; i < height; i++)
    {
        array[i] = malloc(sizeof(int) * width);
        if (!array[i])
        {
            for (int j = 0; j < i; j++)
            {
                free(array[j]);
            }
            free(array[i]);
            return (NULL);
        }
    }

    for (int i = 0; array[i]; i++)
        for (int j = 0; array[i][j]; j++)
            array[i][j] = 0;
    return (array);
}

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}
