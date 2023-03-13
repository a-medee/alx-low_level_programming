#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free a 2 dimensional grid previously created
 *@grid: a pointer to a pointer
 *@height: a type int parameter
 *
 *description - a function that frees a 2 dimensional
 *grid previously created by your alloc_grid function
 *Return: type void
 */

void free_grid(int **grid, int height)
{
	free(grid);
}
