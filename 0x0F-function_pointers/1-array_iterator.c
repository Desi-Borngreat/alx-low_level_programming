#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -  executes a given function as a parameter on each element of an array
 * @array: The array with elements to iterate
 * @size: array's size
 * @action: pointer to the function that prints
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}

