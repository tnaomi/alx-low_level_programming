#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid
 * @grid: the grid gen in alloc_grid
 * @height: grid height (row count)
 */
void free_grid(int **grid, int height)
{
int index;

for (index = 0; index < height; index++)
free(grid[index]);
free(grid);
}
