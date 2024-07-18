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
int **grid;
int i;
int j;
grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}
if (width == 0 || height == 0 || width < 0 || height < 0)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL) {
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
