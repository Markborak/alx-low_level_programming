#include <stdlib.h>

/**
 * free_grid - frees up the memory allocated by alloc_grid
 *
 * @grid: Pointer to the 2-dimensional array
 * @height: Height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
grid[i] = NULL;
}
}
free(grid);
}
