#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value of elements
 * @max: maximum value of elements
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *pointer;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
pointer = malloc(sizeof(int) * size);
if (pointer == NULL)
return (NULL);
for (i = 0; min <= max; i++)
pointer[i] = min++;
return (pointer);
}

