#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid.
 * Return: nothing.
 * @grid: 2 dimensional array.
 * @height: height of 2 dimensional array.
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
