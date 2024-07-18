#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - function that returns pointer to 2 dimensional array of ints.
 * Return:  pointer or NULL.
 * @width: width of 2 dimensional array.
 * @height: height of 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
int *grid[height][width] = {NULL};
unsigned int i;
unsigned int j;
if (width == 0 || height == 0 || width < 0 || height < 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = malloc(sizeof(int));
*grid[i][j] = 0;
}
}
if (grid == NULL)
{
return (NULL);
}
}
